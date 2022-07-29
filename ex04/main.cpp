/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:41:46 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/18 15:14:40 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cctype>

void	transform_filename(std::string &filename) {
	std::string		temp;

	for (size_t i = 0 ; i < filename.length() ; i++)
		temp.push_back(std::toupper(filename[i]));
	filename.assign(temp);
	filename.append(".replace");
}

void	replace( std::stringstream &file_buffer, std::ifstream &infile,  std::string const &str_target, std::string const &str_replacement ) {
	
	std::size_t		pos_target = 0;
	std::string		str_buffer;

	while ( std::getline(infile,str_buffer) ) {
		pos_target = str_buffer.find(str_target);
		if (pos_target != std::string::npos) {
			str_buffer.erase(pos_target, str_target.length());
			str_buffer.insert(pos_target, str_replacement);
		}
		file_buffer << str_buffer << std::endl;
	}
	return ;
}

int		main( int ac, char **av ) {

	if (ac != 4) {
		std::cout << "Invalid arguments" << std::endl;
		return 1;
	}

	std::string		str_target = av[2];
	std::string		str_replacement = av[3];
	if (str_target.empty() || str_replacement.empty()) {
		std::cout << "Invalid input strings" << std::endl;
		return 1;
	}

	std::string		filename(av[1]);
	std::ifstream	infile(filename);
	if (!infile || !infile.good()) {
		infile.close();
		std::cout << "Invalid infile" << std::endl;
		return 1;
	}
	transform_filename(filename);
	std::ofstream	outfile(filename);
	if (!outfile || !outfile.good()) {
		infile.close();
		std::cout << "Invalid outfile : cannot create or access to " << filename << std::endl;
		return 1;
	}
	
	std::stringstream		file_buffer;
	replace(file_buffer, infile, str_target, str_replacement);
	outfile << file_buffer.rdbuf();
	infile.close();
	outfile.close();
}

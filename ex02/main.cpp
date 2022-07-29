/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:26:54 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/17 13:28:04 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main() {
	std::string		brain = "HI THIS IS BRAIN";
	std::string		&stringREF = brain;
	std::string		*stringPTR = &brain;

	std::cout << "Address of the string itself : " << &brain << std::endl;
	std::cout << "Address of the string pointer : " << stringPTR << std::endl;
	std::cout << "Address of the string reference : " << &stringREF << std::endl;

	std::cout << brain << std::endl;
	std::cout << stringREF << std::endl;
	std::cout << *stringPTR << std::endl;


}

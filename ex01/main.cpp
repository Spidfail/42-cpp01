/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:07:54 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/15 18:21:54 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main() {

	std::string			buffnumber;
	std::string			buffname;

	std::cout << "*The shoot of Hector resonate in the valley.*" << std::endl;
	std::cout << std::endl;
	
	std::cout << "And you listener, how many zombies do you think there is ? : ";
	getline(std::cin, buffnumber);
	std::cout << std::endl;
	for (unsigned long i = 0 ; i < buffnumber.length() && buffnumber[i] ; i++) {
		if (!std::isdigit(buffnumber[i])) {
			std::cout << "Wrong number. No Horde is coming, by Your FAULT. Try again !" << std::endl;
			return 1;
		}
	}

	std::cout << std::endl;
	std::cout << "Fine, a Horde of " << buffnumber << " zombies is coming !!!" << std::endl;
	std::cout << "But... What are the names of all the Zombies ? : ";
	getline(std::cin, buffname);
	std::cout << std::endl;
	std::cout << "Fine, a Horde of " << buffnumber << " " << buffname << " is coming !!!" << std::endl;
	Zombie	*randomHorde = zombieHorde( std::stoi(buffnumber), buffname );

	std::cout << "Hector : What again ? Another group is coming ?" << std::endl;
	std::cout << "Hector : Com'on morrons, you won't regret it !" << std::endl;
	std::cout << std::endl;

	for (int i = 0 ; i < std::stoi(buffnumber) ; i++) {
		std::cout << "*BANG !*" << std::endl;
	}
	delete [] randomHorde;

	std::cout << std::endl;
	std::cout << "*Hector killed all of them !!!!!!!!! What a Hero !*" << std::endl;

	return 1;
}

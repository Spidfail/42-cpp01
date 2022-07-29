/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:28:09 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/15 15:09:00 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main( void ) {

	std::cout << "Jessica : What was that ?" << std::endl;
	std::cout << "Albert : A Zombie ! I'll take care of him." << std::endl;
	std::cout << "*BANG !*" << std::endl;
	randomChump( "Patrick" );
	std::cout << "Albert : HA, in your face Patrick ! You shouldn't have fall asleep in your watch last night." << std::endl;
	std::cout << std::endl;

	Zombie *randomZ = new Zombie("randomZ");
	randomZ->silentAnnounce();
	std::cout << std::endl;

	std::cout << "Jessica : ALBERT ! Behind you !" << std::endl;
	randomZ->announce();
	std::cout << "Albert : Arrrggggghhhhgggghhh...." << std::endl;

	std::cout << "*BANG !*" << std::endl << std::endl;
	delete randomZ;
	std::cout << "*Jessica shot the Zombie, but...*" << std::endl;
	Zombie *AlbertZ = new Zombie("Albert");
	AlbertZ->announce();
	std::cout << std::endl;

	std::cout << "*BANG !*" << std::endl;
	std::cout << "*Jessica missed transformed Albert !*" << std::endl;
	std::cout << "Jessica : NOOO !" << std::endl;
	Zombie *JessicaZ = new Zombie("Jessica");
	JessicaZ->announce();
	std::cout << std::endl;

	std::cout << "Hector : What again ?! AH it's you ! Tired of life ?" << std::endl;
	std::cout << "*BANG BANG !*" << std::endl;
	delete AlbertZ;
	delete JessicaZ;
	std::cout << std::endl << "Hector : What a bunch of loosers..." << std::endl;
}

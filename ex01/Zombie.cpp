/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:37:49 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/15 18:11:33 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
}


void	Zombie::setZombieName( std::string name ) {
	this->zName = name;
}

void	Zombie::announce( void ) {
	std::cout << this->zName << " : BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::~Zombie( void ) {
	std::cout << "*" << this->zName << " had is brain splattered on the floor.* " << std::endl;
}

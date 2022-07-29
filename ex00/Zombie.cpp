/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:04:59 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/17 13:17:23 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : zName(name) {
}

void	Zombie::announce( void ) {
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::silentAnnounce( void ) {
	std::cout << "*A very light noise was heard*" << std::endl;
	std::cout << "'It was probably a cat', Jessica said..." << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "*" << this->zName << " had is brain splattered on the floor.* " << std::endl;
}

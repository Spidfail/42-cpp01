/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:21:10 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/15 22:24:33 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string newName ) : name(newName) {
}


std::string	HumanB::getName( void ) const {
	return this->name;
}

void	HumanB::attack( void ) const {
	std::cout << this->name << " attacks with his " << weaponAssigned->getType() << std::endl;
}

void		HumanB::setWeapon( Weapon &newWeapon ) {
	this->weaponAssigned = &newWeapon;
}


HumanB::~HumanB( void ) {
}


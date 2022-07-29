/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:00:11 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/17 13:35:46 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string newName, Weapon &newWeapon ) : name(newName), weaponAssigned(newWeapon) {
}

std::string const	&HumanA::getName( void ) const {
	return this->name;
}

void	HumanA::attack( void ) const {
	std::cout << this->name << " attacks with his " << weaponAssigned.getType() << std::endl;
}

HumanA::~HumanA( void ){}

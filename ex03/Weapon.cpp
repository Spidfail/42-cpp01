/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:17:24 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/17 13:32:32 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _weaponType(type) {
}


std::string const	&Weapon::getType() const {
	return (this->_weaponType);
}

void	Weapon::setType( std::string type ) {
	this->_weaponType = type;
}


Weapon::~Weapon( void ) {

}

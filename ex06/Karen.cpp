/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:06:23 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/17 09:54:00 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

const Karen::storeLevels	Karen::annoyement[4] = {
	{"DEBUG",   Karen::debug},
	{"INFO",    Karen::info},
	{"WARNING", Karen::warning},
	{"ERROR",   Karen::error}
};


Karen::Karen( void ) {
}


void	Karen::complain( const std::string& level ) const {
	for (int i = 0 ; i < 4 ; ++i) {
		if (level == annoyement[i].level)
			annoyement[i].funPtr();
	}
}

void	Karen::debug( void ) {
	std::cout << "	KaReN : I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void ) {
	std::cout << "	KaReN : I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void ) {
	std::cout << "	kArEn : I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void ) {
	std::cout << "	kArEn : This is unacceptable, I want to speak to the manager now." << std::endl;
}


Karen::~Karen( void ) {
}

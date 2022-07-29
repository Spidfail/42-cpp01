/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:06:39 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/16 20:54:09 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main( int ac, char **av) {
	if (ac != 2) {
		std::cout << "Please, Karen is pissed of ! DO SOMETHING !!" << std::endl;
		return 1;
	}

	std::string		kDemand = av[1];
	Karen			kQueries;
	int				nbLevel = 0;

	for (; nbLevel < 4 ; nbLevel++) {
		if (kDemand == kQueries.annoyement[nbLevel].level) {
			break;
		}
	}

	switch(nbLevel) {
		case 0 :
			kQueries.complain(kQueries.annoyement[0].level);
		case 1 :
			kQueries.complain(kQueries.annoyement[1].level);
		case 2 :
			kQueries.complain(kQueries.annoyement[2].level);
		case 3 :
			kQueries.complain(kQueries.annoyement[3].level);
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}

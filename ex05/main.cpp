/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:06:39 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/16 15:28:57 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main() {
	std::string		kDemand;
	Karen			kQueries;

	while ( true ) {
		kDemand = "PISSED";
		while ( kDemand != "DEBUG" && kDemand != "INFO"
				&& kDemand != "WARNING" && kDemand != "ERROR") {
			std::cout << "Please, be a Karen for me ! [DEBUG, INFO, WARNING, ERROR] : ";
			std::getline(std::cin, kDemand);
			std::cout << std::endl;
		}
		kQueries.complain(kDemand);
		std::cout << std::endl;
	}

	return 0;
}

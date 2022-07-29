/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:40:48 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/15 18:22:35 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name ) {
	if (N <= 0)
		return NULL;

	Zombie	*theHorde = new Zombie[N];
	for (int i = 0 ; i < N ; i++) {
		std::cout << i + 1 << "- ";
		theHorde[i].setZombieName(name);
		theHorde[i].announce();
	}
	
	return (theHorde);
}

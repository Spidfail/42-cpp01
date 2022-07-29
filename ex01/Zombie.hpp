/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:30:23 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/17 10:03:18 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <string>

class	Zombie {

	private:
		std::string		zName;
		Zombie	*zombieHorde( void );
		void	setZombieName( void );

	public:
		void	announce( void );
		void	setZombieName( std::string name );

		Zombie( void );
		~Zombie( void );
};


Zombie	*zombieHorde( int N, std::string name );

#endif

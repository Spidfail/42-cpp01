/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:57:34 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/17 13:20:57 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {

	private:
		std::string		zName;
		void	randomChump( void );
		Zombie	*newZombie( void );

		Zombie( void );


	public:
		void	announce( void );
		void	silentAnnounce( void );

		Zombie( std::string name );
		~Zombie( void );
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif

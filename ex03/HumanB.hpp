/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:15:37 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/15 22:19:40 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

	public:
		std::string	getName( void ) const;
		void		setWeapon( Weapon &newWeapon );
		void		attack( void ) const;

		HumanB( std::string newName );
		~HumanB( void );

	private:
		std::string		name;
		Weapon			*weaponAssigned;

		void		setType( void );
		HumanB( void );

};

#endif

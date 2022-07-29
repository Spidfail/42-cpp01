/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:07:41 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/17 13:35:43 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

	public:
		std::string const	&getName( void ) const;
		void				attack( void ) const;

		HumanA( std::string newName, Weapon &weaponType );
		~HumanA( void );

	private:
		std::string		name;
		Weapon			&weaponAssigned;

		void			setName( std::string );
		HumanA( void );

};

#endif

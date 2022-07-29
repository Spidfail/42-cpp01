/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:04:20 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/17 13:33:12 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon {

	public:
		std::string const	&getType() const;
		void				setType( std::string type );

		Weapon( std::string type );
		~Weapon( void );

	private:
		std::string _weaponType;

};

# endif

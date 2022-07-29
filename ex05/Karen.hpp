/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:06:59 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/16 14:59:39 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class	Karen {

		struct	storeLevels {
			const char* 	level;
			void			(&funPtr) ( void );
		};

	public :

		void	complain( const std::string& level ) const;

		Karen( void );
		~Karen( void );

	private :
		static const storeLevels	annoyement[4];

		static void	debug( void );
		static void	info( void );
		static void	warning( void );
		static void	error( void );

};

#endif //########################################################## KAREN_HPP

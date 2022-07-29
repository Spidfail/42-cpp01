/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:06:59 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/16 20:54:44 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class	Karen {


	public :
		struct	storeLevels {
			const char* 	level;
			void			(&funPtr) ( void );
		};
		static const storeLevels	annoyement[4];
		void		complain( const std::string& level ) const;

		Karen( void );
		~Karen( void );

	private :
		static void	debug( void );
		static void	info( void );
		static void	warning( void );
		static void	error( void );

};

#endif //########################################################## KAREN_HPP

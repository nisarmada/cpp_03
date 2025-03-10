/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 19:25:56 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/10 14:16:20 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string name;
		int			hp;
		int			energyPoints;
		int			ad;

	public:
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif
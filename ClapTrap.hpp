/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Claptrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 19:25:56 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/09 19:55:24 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string name;
		int			hp;
		int			energyPoints;
		int			ad;

	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif
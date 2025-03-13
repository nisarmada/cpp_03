/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 12:48:23 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/13 16:10:04 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap() override;
		ScavTrap(const ScavTrap &other);
		ScavTrap& operator=(const ScavTrap &other);

		void guardGate();
		void attack(const std::string& name) override;
};




#endif
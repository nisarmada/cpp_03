/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 12:48:23 by nikos         #+#    #+#                 */
/*   Updated: 2025/04/01 14:51:33 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(std::string name);
		~ScavTrap() override;

		void guardGate();
		void attack(const std::string& name) override;
};




#endif
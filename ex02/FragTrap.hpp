/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 14:06:04 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/13 15:59:43 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);

		void attack(const std::string& name) override;
		void highFiveGuys();
};




#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 13:04:59 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/13 16:15:59 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Monica") {
	std::cout << "ScavTrap named Monica has been created" << std::endl;
	this->hp = 100;
	this->energyPoints = 50;
	this->ad = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap named " << this->name << " has been created" << std::endl;
	this->hp = 100;
	this->energyPoints = 50;
	this->ad = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap named " << this->name << " has been destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	ClapTrap::operator=(other);
	this->hp = other.hp;
	this->energyPoints = other.energyPoints;
	this->ad = other.ad;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	this->hp = other.hp;
	this->energyPoints = other.energyPoints;
	this->ad = other.ad;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hp > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << 
			" dealing " << this->ad << " points of damage !!" << std::endl;
		--energyPoints;
	}
	else
		std::cout << "ScavTrap " << this->name << " is either drained or dead" << std::endl;
}

void ScavTrap::guardGate() {
	if (this->hp > 0 && this->energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " is in guard mode " << std::endl;
		--energyPoints;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " is either drained or dead" <<std::endl;
	}
}
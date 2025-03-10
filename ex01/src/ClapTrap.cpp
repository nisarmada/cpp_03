/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 19:33:40 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/09 20:00:23 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), energyPoints(10), ad(10)
{
	// this->name = name;
	std::cout << "Constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor has been called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (this->hp > 0 && this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " <<
			target << " causing " << this->ad << " points of damage !" << std::endl;
		--energyPoints;
	}
	else
		std::cout << "ClapTrap " << this->name << " cannot attack, either drained or dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hp > 0)
	{
		this->hp -= amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->energyPoints > 0 && this->hp > 0)
	{
		this->hp += amount;
		--energyPoints;
		std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " HP!" << std::endl;

	}
	else
		std::cout << "ClapTrap " << this->name << " has no energy" << std::endl;
}
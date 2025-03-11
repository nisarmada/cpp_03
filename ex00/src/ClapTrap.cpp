/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 19:33:40 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/11 20:38:05 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Mike"), hp(10), energyPoints(10), ad(10)
{
	std::cout << "Default Constructor has been called" << std::endl;

}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), energyPoints(10), ad(10)
{
	std::cout << "Constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hp(other.hp),
	energyPoints(other.energyPoints), ad(other.ad) {
		std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this == &other)
		return (*this);
	name = other.name;
	hp = other.hp;
	ad = other.ad;
	energyPoints = other.energyPoints;
	return (*this);
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
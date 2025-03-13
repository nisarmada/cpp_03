/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 14:13:52 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/13 16:07:00 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Mike") {
	std::cout << "FragTrap named " << this->name << " has been created !" << std::endl;
	this->hp = 100;
	this->energyPoints = 100;
	this->ad = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap named " << this->name << " has been created !" << std::endl;
	this->hp = 100;
	this->energyPoints = 100;
	this->ad = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap named " << this->name << " has been destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copied !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

void FragTrap::attack(const std::string& target) {
	if (this->hp > 0 && this->energyPoints > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " <<
			target << " causing " << this->ad << " points of damage !" << std::endl;
		--energyPoints;
	}
	else
		std::cout << "FragTrap " << this->name << " cannot attack, either drained or dead" << std::endl;

}

void FragTrap::highFiveGuys() {
	if (this->hp > 0 && this->energyPoints > 0)
	{
		std::cout << "FragTrap " << this->name << " wants a high five guysss:)" << std::endl;
		--energyPoints;
	}
	else
		std::cout << "FragTrap " << this->name << " is either drained or dead" << std::endl;
}
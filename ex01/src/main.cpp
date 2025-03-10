/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 19:54:08 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/10 13:53:13 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ScavTrap.hpp"

#include <iostream>

int main() {
    // Create a ClapTrap object
    ClapTrap robot("Clappy");

    // Test initial state
    std::cout << "\n[TEST] Initial state\n";
    robot.attack("target1");
    robot.takeDamage(5);
    robot.beRepaired(3);

    // Test when out of energy
    std::cout << "\n[TEST] Draining energy\n";
    for (int i = 0; i < 10; i++) { // Should reduce energy to 0
        robot.attack("target2");
    }
    robot.attack("target3"); // Should print an error message

    // Test when out of HP
    std::cout << "\n[TEST] Taking fatal damage\n";
    robot.takeDamage(100); // Should reduce HP to 0
    robot.attack("target4"); // Should print an error message
    robot.beRepaired(5); // Should not work

    // Create a ScavTrap object (derived from ClapTrap)
    ScavTrap scavRobot("Scavvy");

    // Test ScavTrap specific functionality
    std::cout << "\n[TEST] ScavTrap state\n";
    scavRobot.attack("target5"); // Should print a different attack message for ScavTrap
    scavRobot.takeDamage(10);
    scavRobot.beRepaired(5);

    // Test ScavTrap in Gatekeeper mode
    scavRobot.guardGate(); // Should print ScavTrap's guardGate message

    // Test when out of energy for ScavTrap
    std::cout << "\n[TEST] Draining energy for ScavTrap\n";
    for (int i = 0; i < 10; i++) { // Should reduce energy to 0
        scavRobot.attack("target6");
    }
    scavRobot.attack("target7"); // Should print an error message

    // Test when out of HP for ScavTrap
    std::cout << "\n[TEST] Taking fatal damage for ScavTrap\n";
    scavRobot.takeDamage(150); // Should reduce HP to 0
    scavRobot.attack("target8"); // Should print an error message
    scavRobot.beRepaired(5); // Should not work

    return 0;
}

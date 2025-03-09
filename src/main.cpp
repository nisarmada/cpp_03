/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 19:54:08 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/09 19:55:24 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ClapTrap.hpp"

int main() {
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

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 19:54:08 by nikos         #+#    #+#                 */
/*   Updated: 2025/04/01 14:24:38 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ScavTrap.hpp"

#include <iostream>

int main() {
    ClapTrap robot("Clappy");

    robot.attack("target1");
    robot.takeDamage(5);
    robot.beRepaired(3);

    for (int i = 0; i < 10; i++) { // Should reduce energy to 0
        robot.attack("target2");
    }
    robot.attack("target3"); // Should print an error message

    robot.takeDamage(100); // Should reduce HP to 0
    robot.attack("target4"); // Should print an error message
    robot.beRepaired(5); // Should not work

    ScavTrap scavRobot("Scavvy");

    scavRobot.attack("target5"); 
    scavRobot.takeDamage(10);
    scavRobot.beRepaired(5);

    scavRobot.guardGate();
    for (int i = 0; i < 50; i++) { // Should reduce energy to 0
        scavRobot.attack("target6");
    }
    scavRobot.attack("target7");

    scavRobot.takeDamage(150); // Should reduce HP to 0
    scavRobot.attack("target8"); 
    scavRobot.beRepaired(5); // Should not work

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 19:54:08 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/10 14:31:07 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../FragTrap.hpp"

void printSeparator(const std::string& title) {
    std::cout << "\n-----------------------------------------" << std::endl;
    std::cout << " " << title << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
}

int main() {
    printSeparator("CONSTRUCTION TESTS");
    
    // Create a ClapTrap and a FragTrap to demonstrate construction order
    std::cout << "Creating a ClapTrap:" << std::endl;
    ClapTrap clappy("Clappy");
    
    std::cout << "\nCreating a FragTrap:" << std::endl;
    FragTrap fraggy("Fraggy");
    
    // Test that both objects work with their respective attribute values
    printSeparator("BASIC FUNCTIONALITY TESTS");
    
    // ClapTrap attacks (10 damage)
    std::cout << "ClapTrap attack:" << std::endl;
    clappy.attack("Enemy");
    
    // FragTrap attacks (30 damage)
    std::cout << "\nFragTrap attack:" << std::endl;
    fraggy.attack("Enemy");
    
    // Test unique FragTrap function
    std::cout << "\nTesting FragTrap highFivesGuys:" << std::endl;
    fraggy.highFiveGuys();
    
    // Test taking damage and repairs
    printSeparator("DAMAGE AND REPAIR TESTS");
    
    std::cout << "ClapTrap takes damage and repairs:" << std::endl;
    clappy.takeDamage(5);
    clappy.beRepaired(3);
    
    std::cout << "\nFragTrap takes damage and repairs:" << std::endl;
    fraggy.takeDamage(20);
    fraggy.beRepaired(15);
    
    // Test energy point depletion
    printSeparator("ENERGY DEPLETION TESTS");
    
    std::cout << "Depleting ClapTrap's energy points:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "Energy use #" << (i+1) << ": ";
        clappy.attack("Target");
    }
    
    // Try to perform actions with depleted energy
    std::cout << "\nAttempting actions with depleted energy:" << std::endl;
    clappy.attack("Target");
    clappy.beRepaired(5);
    
    // Test HP depletion
    printSeparator("HP DEPLETION TESTS");
    
    std::cout << "Depleting FragTrap's HP:" << std::endl;
    fraggy.takeDamage(200);  // More than the 100 HP it has
    
    // Try to perform actions when "dead"
    std::cout << "\nAttempting actions when dead:" << std::endl;
    fraggy.attack("Target");
    fraggy.beRepaired(10);
    fraggy.highFiveGuys();
    
    // Demonstrate destruction in reverse order
    printSeparator("DESTRUCTION TESTS");
    
    std::cout << "End of program, destructors will be called:" << std::endl;
    
    return 0;
}
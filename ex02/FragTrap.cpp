#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
	name = Name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << Name << "FragTrap has been constructed" << std::endl; 
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives request" << std::endl;
}
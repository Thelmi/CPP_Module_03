#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	name = Name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << Name << "FragTrap has been constructed" << std::endl; 
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "FragTrap " << name << " copied!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)  
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "FragTrap " << name << " assigned!" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destructed!" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives request" << std::endl;
}
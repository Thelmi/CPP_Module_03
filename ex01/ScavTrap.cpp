#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
	name = Name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << Name << " ScavTrap has been constructed" << std::endl; 
}


ScavTrap::ScavTrap(const ScavTrap& other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "ScavTrap " << name << " copied!" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
    if (this != &other)  
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ScaveTrap " << name << " assigned!" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destructed!" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
    if (hitPoints <= 0 || energyPoints <= 0) 
    {
        std::cout << "ScavTrap " << name << " has no energy or hit points left to attack!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ScavTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode. " << std::endl;
}

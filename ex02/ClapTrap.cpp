#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
: name(Name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << Name << " ClapTrap has been constructed" << std::endl; 
}


ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name), hitPoints(other.hitPoints),
      energyPoints(other.energyPoints), attackDamage(other.attackDamage) 
{
    std::cout << "ClapTrap " << name << " copied!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) 
{
    if (this != &other)  
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << name << " assigned!" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap " << name << " destructed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) 
{
    if (hitPoints <= 0 || energyPoints <= 0) 
    {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to attack!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    if (hitPoints <= 0) 
    {
        std::cout << "ClapTrap " << name << " is already down and can't take more damage!" << std::endl;
        return;
    }
    hitPoints -= amount;
    if (hitPoints < 0) 
        hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! "
              << "Remaining hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (hitPoints <= 0 || energyPoints <= 0) 
    {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to repair itself!" << std::endl;
        return;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " repairs itself for " << amount
              << " hit points! Current hit points: " << hitPoints << std::endl;
}


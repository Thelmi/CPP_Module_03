#include "ClapTrap.hpp"

int main() 
{
    ClapTrap clap1("Taha");
    ClapTrap clap2("Maaz");
    clap1.attack("Target1");
    clap1.takeDamage(5);
    clap1.beRepaired(3);

    clap2.attack("Target2");
    clap2.takeDamage(15);
    clap2.beRepaired(5);

    return 0;
}

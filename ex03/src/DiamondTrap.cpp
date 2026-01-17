#include <iostream>
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "[DiamondTrap] Default constructor called" << std::endl;
	this->name = "DiamondTrap";
    ClapTrap::name = "DiamondTrap_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "[DiamondTrap] Default constructor called" << std::endl;
	this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap)
{
    std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
    *this = diamondTrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
    std::cout << "[DiamondTrap] Copy assignment operator called" << std::endl;
    if (this != &diamondTrap)
    {
        this->name = diamondTrap.name;
        this->hitPoints = diamondTrap.hitPoints;
        this->energyPoints = diamondTrap.energyPoints;
        this->attackDamage = diamondTrap.attackDamage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->name << "; My ClapTrap name is " << ClapTrap::name << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:56:20 by ehode             #+#    #+#             */
/*   Updated: 2026/01/16 19:25:48 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
    std::cout << "[ScavTrap] Default constructor called" << std::endl;
    this->name = "ScavTrap";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "[ScavTrap] Default constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
    std::cout << "[ScavTrap] Copy constructor called" << std::endl;
    *this = scavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
    std::cout << "[ScavTrap] Copy assignment operator called" << std::endl;
    if (this != &scavTrap)
    {
        this->name = scavTrap.name;
        this->hitPoints = scavTrap.hitPoints;
        this->energyPoints = scavTrap.energyPoints;
        this->attackDamage = scavTrap.attackDamage;
    }
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "[ScavTrap] Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " has no energy left!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
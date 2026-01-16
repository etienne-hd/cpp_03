/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:56:20 by ehode             #+#    #+#             */
/*   Updated: 2026/01/16 19:41:05 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
    std::cout << "[FragTrap] Default constructor called" << std::endl;
    this->name = "FragTrap";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "[FragTrap] Default constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    std::cout << "[FragTrap] Copy constructor called" << std::endl;
    *this = fragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
    std::cout << "[FragTrap] Copy assignment operator called" << std::endl;
    if (this != &fragTrap)
    {
        this->name = fragTrap.name;
        this->hitPoints = fragTrap.hitPoints;
        this->energyPoints = fragTrap.energyPoints;
        this->attackDamage = fragTrap.attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "[FragTrap] Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "[FragTrap] HIGH FIVES !!!!" << std::endl;
}
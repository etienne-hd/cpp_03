/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:55:42 by ehode             #+#    #+#             */
/*   Updated: 2026/01/16 19:26:11 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "- Test 1" << std::endl;
    {
        ScavTrap scavTrap("sabartho");
        for (int i = 0; i < 15; i++)
            scavTrap.attack("mbatty");
        scavTrap.takeDamage(1);
        scavTrap.attack("ehode");
        scavTrap.takeDamage(1000);
    }

    std::cout << "- Test 2" << std::endl;
    {
        ScavTrap scavTrap("mbatty");
        for (int i = 0; i < 3; i++)
            scavTrap.attack("sabartho");
        scavTrap.takeDamage(3);
        scavTrap.attack("ehode");
        scavTrap.beRepaired(25);
    }

    std::cout << "- Test 3" << std::endl;
    {
        ScavTrap scavTrap1("alaualik");
        ScavTrap scavTrap2 = scavTrap1;
        scavTrap2.attack("ehode");
    }

    std::cout << "- Test 4" << std::endl;
    {
        ScavTrap scavTrap("ehode");
        scavTrap.guardGate();
    }
}
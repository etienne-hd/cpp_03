/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:55:42 by ehode             #+#    #+#             */
/*   Updated: 2026/01/16 19:39:33 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "- Test 1" << std::endl;
    {
        FragTrap fragTrap("sabartho");
        for (int i = 0; i < 15; i++)
            fragTrap.attack("mbatty");
        fragTrap.takeDamage(1);
        fragTrap.attack("ehode");
        fragTrap.takeDamage(1000);
    }

    std::cout << "- Test 2" << std::endl;
    {
        FragTrap fragTrap("mbatty");
        for (int i = 0; i < 3; i++)
            fragTrap.attack("sabartho");
        fragTrap.takeDamage(3);
        fragTrap.attack("ehode");
        fragTrap.beRepaired(25);
    }

    std::cout << "- Test 3" << std::endl;
    {
        FragTrap fragTrap1("alaualik");
        FragTrap fragTrap2 = fragTrap1;
        fragTrap2.attack("ehode");
    }

    std::cout << "- Test 4" << std::endl;
    {
        FragTrap fragTrap("ehode");
        fragTrap.highFivesGuys();
    }
}
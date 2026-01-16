/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:55:42 by ehode             #+#    #+#             */
/*   Updated: 2026/01/16 19:10:01 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "- Test 1" << std::endl;
    {
        ClapTrap clapTrap("sabartho");
        for (int i = 0; i < 15; i++)
            clapTrap.attack("mbatty");
        clapTrap.takeDamage(1);
        clapTrap.attack("ehode");
        clapTrap.takeDamage(1000);
    }

    std::cout << "- Test 2" << std::endl;
    {
        ClapTrap clapTrap("mbatty");
        for (int i = 0; i < 3; i++)
            clapTrap.attack("sabartho");
        clapTrap.takeDamage(3);
        clapTrap.attack("ehode");
        clapTrap.beRepaired(25);
    }

    std::cout << "- Test 3" << std::endl;
    {
        ClapTrap clapTrap1("alaualik");
        ClapTrap clapTrap2 = clapTrap1;
        clapTrap2.attack("ehode");
    }
}
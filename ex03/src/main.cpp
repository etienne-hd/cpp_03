/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:55:42 by ehode             #+#    #+#             */
/*   Updated: 2026/01/17 15:02:03 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "- Test 1" << std::endl;
    {
        DiamondTrap diamondTrap("alaualik");
        diamondTrap.attack("stetrel");
        diamondTrap.whoAmI();
    }

    std::cout << "- Test 2" << std::endl;
    {
        DiamondTrap diamondTrap("rgodet");
        diamondTrap.attack("amblanch");
        diamondTrap.beRepaired(50);
        diamondTrap.guardGate();
        diamondTrap.highFivesGuys();
        diamondTrap.takeDamage(67);
        diamondTrap.whoAmI();
    }

    std::cout << "- Test 3" << std::endl;
    {
        DiamondTrap diamondTrap("adeboose");
        diamondTrap.takeDamage(67);
        diamondTrap.takeDamage(67);
        diamondTrap.takeDamage(67);
        diamondTrap.takeDamage(67);
    }
}
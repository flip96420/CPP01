/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:48:03 by codespace         #+#    #+#             */
/*   Updated: 2024/11/17 12:59:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *horde;
    int     i;

    horde = zombieHorde(20, "Staggerlee");
    i = 0;
    while (i < 20)
    {
        horde[i].announce();
        i++;
    }
    delete [] horde;
    return (0);
}
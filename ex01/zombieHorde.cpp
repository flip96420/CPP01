/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:31:17 by codespace         #+#    #+#             */
/*   Updated: 2024/11/17 12:58:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    int     i;
    Zombie  *horde = new Zombie[N];

    i = 0;
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return (horde);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 03:38:14 by codespace         #+#    #+#             */
/*   Updated: 2024/11/17 12:51:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->name = "\0";
}

Zombie::Zombie(std:: string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout   << this->name << " died from not beeing able to correctly spell the word brains. If only they knew it was brains he needed :(" <<std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}
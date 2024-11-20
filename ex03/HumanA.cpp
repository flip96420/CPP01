/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:47:49 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/20 17:31:10 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
	this->name = name;
	this->weapon = weapon;
	this->weapon.setType(weapon.getType());
}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::cout 	<< this->name << " attacks with their "
				<< this->weapon.getType() << std::endl;
}
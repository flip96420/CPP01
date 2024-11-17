/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:21:35 by codespace         #+#    #+#             */
/*   Updated: 2024/11/17 13:26:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>

class HumanA
{
private:
    std::string weapon;
    std::string name;
public:
    HumanA(std::string weapon);
    ~HumanA();
    void    attack(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:02:24 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/22 14:20:59 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl_obj;

	harl_obj.complain("DEBUG");
	harl_obj.complain("INFO");
	harl_obj.complain("WARNING");
	harl_obj.complain("ERROR");
	return (0);
}
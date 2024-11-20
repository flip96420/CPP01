/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:59:05 by pschmunk          #+#    #+#             */
/*   Updated: 2024/11/20 19:59:15 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	replace(std::string input, std::string filename, std::string s1, std::string s2)
{
	unsigned long	i;
	std::string		res;
	std::ofstream	outfile((std::string(filename) + ".replace").c_str());

	if (outfile.fail())
		return (1);
	if (s1.empty())
	{
		std::cout << "Error: String to replace cannot be empty." << std::endl;
        return (1);
	}
	i = 0;
	while(i < input.length())
	{
		if (input.substr(i, s1.length()) == s1)
		{
			res += s2;
			i += s1.length();
		}
		else
		{
			res += input[i];
			i++;
		}
	}
	outfile << res;
	outfile.close();
	return (0);
}

int main(int ac, char **av)
{
	std::ifstream		infile;
	std::ostringstream	buffer;
	std::string			input;

	if (ac != 4)
	{
		std::cout 	<< "Invalid input! Please use the program like this: " << std::endl
					<< "Argument 1: filename" << std::endl
					<< "Argument 2: string to replace" << std::endl
					<< "Argument 3: new string" << std::endl
					<< "Less or more arguments will be considered as invalid input." << std::endl;
		return (1);
	}
	infile.open(av[1]);
	if (infile.fail())
	{
		std::cout 	<< "Error: " << av[1] << ":"
					<< " no such file or directory" << std::endl;
		return (1);
	}
	buffer << infile.rdbuf();
	input = buffer.str();
	infile.close();
	return (replace(input, av[1], av[2], av[3]));
}
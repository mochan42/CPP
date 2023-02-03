/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:42:24 by moninechan        #+#    #+#             */
/*   Updated: 2023/01/25 18:18:06 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int arg_idx;
	int	str_idx;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	if (argc > 1)
	{     
		for (arg_idx = 1 ; arg_idx < argc; arg_idx++)
		{
			for(str_idx = 0; str_idx < (strlen(argv[arg_idx]) + 1); str_idx++)
			{
				std::cout << (char)toupper(argv[arg_idx][str_idx]);
			}
		}
	}
	std::cout << '\n';
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:39:33 by moninechan        #+#    #+#             */
/*   Updated: 2023/02/04 19:50:08 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string	userCommand;
	PhoneBook	myPhonebook;
	int			i;
	
	i = 0;
	std::cout << "Enter your command (ADD, SEARCH or EXIT):";
	while(std::getline(std::cin, userCommand))
	{
		// std::getline(std::cin, userCommand); // This statement here will lead to infinite loop when ctrl+D is pressed.
		if (userCommand == "ADD")
		{
			// std::cout << "Input is :" << userCommand << '\n';
			if (i == 8)
				i = 0;
			myPhonebook.addContact(i);
			i++;
		}
		else if(userCommand == "SEARCH")
		{
			std::cout << "Input is :" << userCommand << '\n';
		}
		else if(userCommand == "EXIT")
		{
			break ;
		}
		else
		{
			std::cin.clear(); //clear invalid status in input stream
			std::cout << "Invalid Input.\n";
		}
		std::cout << "Enter your command (ADD, SEARCH or EXIT):";
	}
	return (0);
}

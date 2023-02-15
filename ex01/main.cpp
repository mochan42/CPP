/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:39:33 by moninechan        #+#    #+#             */
/*   Updated: 2023/02/05 11:53:26 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string	userCommand;
	PhoneBook	myPhonebook;
	int			i;
	
	i = 0;
	std::cout << "\e[1;96mWELCOME TO OUR NEW PHONEBOOK!\e[0m\n\n";
	std::cout << "\e[1;96md8888b  db   db   d88b   d8b   db d88888b d8888b   .d88b.   .d88b.  db   dD\e[0m\n";
	std::cout << "\e[1;96m88   8D 88   88  8P  Y8  888o  88 88      88   8D .8P  Y8. .8P  Y8. 88  8P \e[0m\n"; 
	std::cout << "\e[1;96m88oodD  88ooo88 88    88 88V8o 88 88ooooo 88oooY  88    88 88    88 88o8P  \e[0m\n"; 
	std::cout << "\e[1;96m88      88   88 88    88 88 V8o88 88      88   b  88    88 88    88 88°8b  \e[0m\n";
	std::cout << "\e[1;96m88      88   88  8b  d8  88  V888 88      88   8D  8b  d8   8b  d8  88  88 \e[0m\n";
	std::cout << "\e[1;96m88      YP   YP   Y88P   VP   V8P Y88888P Y8888P    Y88P     Y88P   YP   YD\e[0m\n";
	std::cout << "\e[1;96m\nEnter your command (ADD, SEARCH or EXIT):\e[0m\n";
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
			myPhonebook.search(myPhonebook);
		}
		else if(userCommand == "EXIT")
		{
			std::cout << "\e[1;92mThank you for having used our Phonebook!\e[0m\n";
			break ;
		}
		else
		{
			std::cin.clear(); //clear invalid status in input stream
			std::cout << "\e[1;101mInvalid Input.\e[0m\n";
		}
		std::cout << "\e[1;96mEnter your command (ADD, SEARCH or EXIT):\e[0m\n";
	}
	return (0);
}

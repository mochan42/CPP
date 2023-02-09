/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:14:23 by moninechan        #+#    #+#             */
/*   Updated: 2023/02/05 11:54:17 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	// std::cout << "PhoneBook constructor executed!\n";
}

PhoneBook::~PhoneBook()
{
	// std::cout << "PhoneBook destructor executed!\n";
}

Contact	PhoneBook::getContacts(int index)
{
    return _Contacts[index];
}

void	PhoneBook::setContact(int index, std::string *newContact)
{
	_Contacts[index].setIndex(index);
	_Contacts[index].setFirstName(newContact[0]);
	_Contacts[index].setLastName(newContact[1]);
	_Contacts[index].setNickName(newContact[2]);
	_Contacts[index].setPhoneNumber(newContact[3]);
	_Contacts[index].setDarkestSecret(newContact[4]);
	// std::cout << "index =" << index << '\n'; // For debugging purposes
	// _Contacts[index].printContact(); // For debugging purposes
}

void	PhoneBook::addContact(int index)
{
	std::string	newContact[5];

	std::cout << "\e[1;96mEnter First Name of the new contact:\e[0m\n";
	std::getline(std::cin, newContact[0]);
	if (newContact[0].empty())
	{
		std::cout << "\e[1;101mInvalid input.\e[0m\n";
		return ;
	}
	std::cout << "\e[1;96mEnter Last Name of the new contact:\e[0m\n";
	std::getline(std::cin, newContact[1]);
	if (newContact[1].empty())
	{
		std::cout << "\e[1;101mInvalid input.\e[0m\n";
		return ;
	}
	std::cout << "\e[1;96mEnter Nick Name of the new contact:\e[0m\n";
	std::getline(std::cin, newContact[2]);
	if (newContact[2].empty())
	{
		std::cout << "\e[1;101mInvalid input.\e[0m\n";
		return ;
	}
	std::cout << "\e[1;96mEnter Phone Number of the new contact:\e[0m\n";
	std::getline(std::cin, newContact[3]);
	if (newContact[3].empty())
	{
		std::cout << "\e[1;101mInvalid input.\e[0m\n";
		return ;
	}
	std::cout << "\e[1;96mEnter Darkest Secret of the new contact:\e[0m\n";
	std::getline(std::cin, newContact[4]);
	if (newContact[4].empty())
	{
		std::cout << "\e[1;101mInvalid input.\e[0m\n";
		return ;
	}
	PhoneBook::setContact(index, newContact);
	std::cout << "\e[1;92mNew Contact successfully added!\e[0m\n";
}

void	PhoneBook::displayHeader()
{
    std::cout << "\e[1;32m|============|============|============|============|\e[0m\n";
    std::cout << "\e[1;32m|      INDEX | FIRST NAME |  LAST NAME |   NICKNAME |\e[0m\n";
    std::cout << "\e[1;32m|============|============|============|============|\e[0m\n";
}

void	PhoneBook::displayFoot()
{
    std::cout << "\e[1;32m|============|============|============|============|\e[0m\n";
}

void	PhoneBook::display()
{
	int		i;
	
	PhoneBook::displayHeader();
	for (i = 0; i < 8; i++)
	{
		_Contacts[i].displayContact();
		std::cout << "\n";
	}
	PhoneBook::displayFoot();
}

void	PhoneBook::search(PhoneBook phonebook)
{
	std::string	str_index;
	int			int_index;
	Contact		searchedContact;

	phonebook.display();
	std::cout << "\e[1;96mEnter the index (1 to 8) of the contact you search :\e[0m\n";
	std::getline(std::cin, str_index);
	int_index = str_index[0] - 48;
	if (str_index[1])
		int_index = -1;
	while (!str_index.empty())
	{
		if (int_index >= 1 && int_index <= 8) 
		{
			searchedContact = getContacts(int_index - 1);
			searchedContact.printContact();
			break ;
		}
		else
		{
			std::cout << "\e[1;101mInvalid index input. Please enter index between 1 and 8.\e[0m\n";
			std::getline(std::cin, str_index);
			int_index = str_index[0] - 48;
			if (str_index[1])
				int_index = -1;
		}
	}
}

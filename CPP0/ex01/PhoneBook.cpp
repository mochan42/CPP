/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:14:23 by moninechan        #+#    #+#             */
/*   Updated: 2023/02/05 00:55:03 by moninechan       ###   ########.fr       */
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
	std::cout << "index =" << index << '\n';
	_Contacts[index].printContact();
}

void	PhoneBook::addContact(int index)
{
	std::string	newContact[5];

	std::cout << "Enter First Name of the new contact:\n";
	std::getline(std::cin, newContact[0]);
	std::cout << "Enter Last Name of the new contact:\n";
	std::getline(std::cin, newContact[1]);
	std::cout << "Enter Nick Name of the new contact:\n";
	std::getline(std::cin, newContact[2]);
	std::cout << "Enter Phone Number of the new contact:\n";
	std::getline(std::cin, newContact[3]);
	std::cout << "Enter Darkest Secret of the new contact:\n";
	std::getline(std::cin, newContact[4]);
	PhoneBook::setContact(index, newContact);
}

void	PhoneBook::displayHeader()
{
    std::cout << "|============|============|============|============|\n";
    std::cout << "|      INDEX | FIRST NAME |  LAST NAME |   NICKNAME |\n";
    std::cout << "|============|============|============|============|\n";
}

void	PhoneBook::displayFoot()
{
    std::cout << "|============|============|============|============|\n";
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
	std::cout << "Enter the index (1 to 8) of the contact you search :\n";
	std::getline(std::cin, str_index);
	if (!str_index.empty())
		int_index = stoi(str_index);
	searchedContact = getContacts(int_index - 1);
	searchedContact.printContact();
}

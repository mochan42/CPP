/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:14:23 by moninechan        #+#    #+#             */
/*   Updated: 2023/02/04 19:47:59 by moninechan       ###   ########.fr       */
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

	std::cout << "Enter First Name of the new contact:";
	std::getline(std::cin, newContact[0]);
	std::cout << "Enter Last Name of the new contact:";
	std::getline(std::cin, newContact[1]);
	std::cout << "Enter Nick Name of the new contact:";
	std::getline(std::cin, newContact[2]);
	std::cout << "Enter Phone Number of the new contact:";
	std::getline(std::cin, newContact[3]);
	std::cout << "Enter Darkest Secret of the new contact:";
	std::getline(std::cin, newContact[4]);
	PhoneBook::setContact(index, newContact);
}


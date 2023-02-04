/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:03:49 by moninechan        #+#    #+#             */
/*   Updated: 2023/02/04 12:01:20 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    _FirstName = "empty";
    _LastName = "empty";
    _NickName = "empty";
    _PhoneNumber = "empty";
    _DarkestSecret ="empty";
    // std::cout << "Contact constructor executed!\n";
}

Contact::~Contact()
{
    // std::cout << "Contact destructor executed!\n";
}

int     Contact::getIndex()
{
    return _index;
}

void    Contact::setIndex(int index)
{
    _index = index;
}

std::string Contact::getFirstName()
{
    return _FirstName;	
}

void Contact::setFirstName(std::string inputFirstName)
{
    _FirstName = inputFirstName;
}

std::string Contact::getLastName()
{
    return _LastName;	
}

void Contact::setLastName(std::string inputLastName)
{
    _LastName = inputLastName;
}

std::string Contact::getNickName()
{
    return _NickName;	
}

void Contact::setNickName(std::string inputNickName)
{
    _NickName = inputNickName;
}

std::string Contact::getPhoneNumber()
{
    return _PhoneNumber;	
}

void    Contact::setPhoneNumber(std::string inputPhoneNumber)
{
    _PhoneNumber = inputPhoneNumber;
}

std::string Contact::getDarkestSecret()
{
    return _DarkestSecret;	
}

void    Contact::setDarkestSecret(std::string inputDarkestSecret)
{
    _DarkestSecret = inputDarkestSecret;
}

void    Contact::printContact()
{
    std::cout << "Index is :" << _index << '\n';
    std::cout << "First Name is :" << _FirstName << '\n';
    std::cout << "Last Name is :" << _LastName << '\n';
    std::cout << "Nick Name is :" << _NickName << '\n';
    std::cout << "PhoneNumber is :" << _PhoneNumber << '\n';
    std::cout << "DarkestSecret is :" << _DarkestSecret << '\n';
}

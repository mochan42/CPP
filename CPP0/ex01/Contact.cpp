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
    _index = -1;
    _FirstName = "..........";
    _LastName = "..........";
    _NickName = "..........";
    _PhoneNumber = "..........";
    _DarkestSecret ="..........";
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
    std::cout << "Index is :" << _index + 1 << '\n';
    std::cout << "First Name is :" << _FirstName << '\n';
    std::cout << "Last Name is :" << _LastName << '\n';
    std::cout << "Nick Name is :" << _NickName << '\n';
    std::cout << "PhoneNumber is :" << _PhoneNumber << '\n';
    std::cout << "DarkestSecret is :" << _DarkestSecret << '\n';
}

std::string	Contact::truncate(std::string string, int width)
{
    std::string result;
    
    if (string.length() > width)
        result = string.substr(0, width - 1) + '.';
    else
        result = string;
    return result;
}

void    Contact::displayContact()
{
    int index;

    index = getIndex();
    if (index == -1)
        std::cout << "| ..........";
    else
        std::cout << "| " << std::setw(10) << getIndex() + 1;
    std::cout << " | " << std::setw(10) << truncate(getFirstName(), 10);
    std::cout << " | " << std::setw(10) << truncate(getLastName(), 10);
    std::cout << " | " << std::setw(10) << truncate(getNickName(), 10) << " |";
}

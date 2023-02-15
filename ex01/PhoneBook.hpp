/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:14:20 by moninechan        #+#    #+#             */
/*   Updated: 2023/02/05 00:21:20 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{    
    public:
        PhoneBook();
        ~PhoneBook();
        std::string Command;
        Contact    getContacts(int index);
        void	   setContact(int index, std::string *newContact);
        void       addContact(int index);
        void       displayHeader();
        void       displayFoot();
        void       display();
        void       search(PhoneBook phonebook);
        
    private:
        Contact    _Contacts[8];
};

#endif
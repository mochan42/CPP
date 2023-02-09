/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:29:01 by moninechan        #+#    #+#             */
/*   Updated: 2023/02/04 12:01:24 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
#include <iomanip>

class   Contact
{
	public:
		Contact();
		~Contact();
		int			getIndex();
		void	    setIndex(int index);
		std::string	getFirstName();
		void		setFirstName(std::string inputFirstName);
		std::string	getLastName();
		void		setLastName(std::string inputLastName);
		std::string	getNickName();
		void		setNickName(std::string inputNickName);
		std::string	getPhoneNumber();
		void		setPhoneNumber(std::string inputPhoneNumber);
		std::string	getDarkestSecret();
		void		setDarkestSecret(std::string inputDarkestSecret);
		void   		printContact();
		void		displayContact();
		std::string	truncate(std::string string, int width);
	
	private:
		int			_index;
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string	_PhoneNumber;
		std::string	_DarkestSecret;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:19:41 by moninechan        #+#    #+#             */
/*   Updated: 2023/02/05 12:47:03 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

int main()
{
  	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year;
   	std::cout << 1 + ltm->tm_mon;
   	std::cout << ltm->tm_mday << "_";
   	std::cout << ltm->tm_hour;
   	std::cout << ltm->tm_min;
   	std::cout << ltm->tm_sec << "]\n";
    return (0);
}

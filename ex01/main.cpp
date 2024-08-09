/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 19:07:13 by nazouz            #+#    #+#             */
/*   Updated: 2024/06/06 19:31:40 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void) {
	PhoneBook			myPhoneBook;
	std::string			input;

	while (true)
	{
		std::cout << "Enter a Command $> ";
		if (!std::getline(std::cin, input))
			break ;
		if (input == "ADD")
			myPhoneBook.addContact();
		else if (input == "SEARCH")
			myPhoneBook.searchContacts();
		else if (input == "EXIT") {
			std::cout << "Exiting the awesome PhoneBook" << std::endl;
			break ;
		}
		else
			std::cout << "Invalid Command, Try again using (ADD, SEARCH, EXIT)" << std::endl;
	}
	return 0;
}

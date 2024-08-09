/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:38:47 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/04 12:08:55 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
	contactsCount = 0;
}

PhoneBook::~PhoneBook() {

}

bool			isDigitString(std::string str)
{
	int			i;

	i = -1;
	while (str[++i])
		if (!isdigit(str[i]))
			return false;
	return true;
}

bool				isAllWhiteSpaces(std::string str) {
	int			i;

	i = -1;
	while (str[++i])
		if (!isspace(str[i]))
			return false;
	return true;
}

std::string			getInput(std::string input_type)
{
	std::string		input;

	while (true) {
		std::cout << input_type << ":\t";
		if (!std::getline(std::cin, input))
			exit(1);
		if (input.empty() || isAllWhiteSpaces(input)) {
			std::cout << input_type << " cannot be empty, Try again" << std::endl;
			continue ;
		}
		else {
			if (input_type == "Phone Number" && !isDigitString(input)) {
				std::cout << input_type << " should contain only digits, Try again" << std::endl;
				continue ;
			}
			break ;
		}
	}
	return input;
}

void		PhoneBook::displayContactsTable()
{
	int				i;

	if (!contactsCount)
		std::cout << "No contacts available." << std::endl << std::endl;
    std::cout << std::string(45, '-') << std::endl;
	std::cout << std::setw(10) << std::right << "Index" << "|"
              << std::setw(10) << std::right << "First Name" << "|"
              << std::setw(10) << std::right << "Last Name" << "|"
              << std::setw(10) << std::right << "Nick Name" << std::endl;
    std::cout << std::string(45, '-') << std::endl;

	i = -1;
	while (++i < contactsCount)
	{
		std::string		fName = contacts[i].getfName();
		std::string		lName = contacts[i].getlName();
		std::string		nName = contacts[i].getnName();
		if (fName.length() > 10) {
			fName.resize(10);
			fName[9] = '.';
		}
		if (lName.length() > 10) {
			lName.resize(10);
			lName[9] = '.';
		}
		if (nName.length() > 10) {
			nName.resize(10);
			nName[9] = '.';
		}
		std::cout << std::setw(10) << std::right << i << "|"
				  << std::setw(10) << std::right << fName << "|"
				  << std::setw(10) << std::right << lName << "|"
				  << std::setw(10) << std::right << nName << std::endl;
		std::cout << std::string(45, '-') << std::endl;
	}
}

void		PhoneBook::addContact() {
	int		contactId = 0;

	if (contactsCount < 8) {
		contactId = contactsCount;
		contactsCount++;
	}
	std::cout << std::endl;
	contacts[contactId].setfName(getInput("First Name"));
	contacts[contactId].setlName(getInput("Last Name"));
	contacts[contactId].setnName(getInput("Nickname"));
	contacts[contactId].setPhoneNumber(getInput("Phone Number"));
	contacts[contactId].setSecret(getInput("Darkest Secret"));
}

void		PhoneBook::searchContacts() {
	std::string			input;
	int					contactId;

	displayContactsTable();
	if (contactsCount) {
		while (true)
		{
			input = getInput("Enter contact index for his/her full info");
			if (!isDigitString(input)) {
				std::cout << "Index must contain only digits" << std::endl;
				continue ;
			}
			contactId = std::stoi(input);
			if (contactId >= 0 && contactId < contactsCount)
				break ;
			else
				std::cout << "Entered index is out of range" << std::endl;
		}
		std::cout << "First Name:\t" << contacts[contactId].getfName() << std::endl;
		std::cout << "Last Name:\t" << contacts[contactId].getlName() << std::endl;
		std::cout << "Nick Name:\t" << contacts[contactId].getnName() << std::endl;
		std::cout << "Phone Number:\t" << contacts[contactId].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret:\t" << contacts[contactId].getSecret() << std::endl;
	}
}

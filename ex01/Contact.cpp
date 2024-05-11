/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 19:07:47 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/11 10:58:42 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact() {
	// firstName = "";
	// lastName = "";
	// nickName = "";
	// phoneNumber = "";
	// darkestSecret = "";
}

Contact::~Contact() {
	
}

std::string		Contact::getfName() {
	return this->firstName;
}

std::string		Contact::getlName() {
	return this->lastName;
}

std::string		Contact::getnName() {
	return this->nickName;
}

std::string		Contact::getPhoneNumber() {
	return this->phoneNumber;
}

std::string		Contact::getSecret(void) {
	return this->darkestSecret;
}

void			Contact::setfName(std::string fName) {
	this->firstName = fName;
}

void			Contact::setlName(std::string lName) {
	this->lastName = lName;
}

void			Contact::setnName(std::string nName) {
	this->nickName = nName;
}

void			Contact::setPhoneNumber(std::string phoneNum) {
	this->phoneNumber = phoneNum;
}

void			Contact::setSecret(std::string Secret) {
	this->darkestSecret = Secret;
}

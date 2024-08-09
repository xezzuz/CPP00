/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 19:07:47 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/04 12:08:26 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact() {
	firstName = "";
	lastName = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
}

Contact::~Contact() {

}

std::string		Contact::getfName() const {
	return firstName;
}

std::string		Contact::getlName() const {
	return lastName;
}

std::string		Contact::getnName() const {
	return nickName;
}

std::string		Contact::getPhoneNumber() const {
	return phoneNumber;
}

std::string		Contact::getSecret() const {
	return darkestSecret;
}

void			Contact::setfName(std::string fName) {
	firstName = fName;
}

void			Contact::setlName(std::string lName) {
	lastName = lName;
}

void			Contact::setnName(std::string nName) {
	nickName = nName;
}

void			Contact::setPhoneNumber(std::string phoneNum) {
	phoneNumber = phoneNum;
}

void			Contact::setSecret(std::string Secret) {
	darkestSecret = Secret;
}

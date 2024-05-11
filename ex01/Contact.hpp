/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 19:08:15 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/11 11:25:14 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickName;
		std::string		phoneNumber;
		std::string		darkestSecret;
	public:
		Contact();
		~Contact();

		std::string		getfName();
		std::string		getlName();
		std::string		getnName();
		std::string		getPhoneNumber();
		std::string		getSecret();
		void			setfName(std::string fName);
		void			setlName(std::string lName);
		void			setnName(std::string nName);
		void			setPhoneNumber(std::string phoneNum);
		void			setSecret(std::string Secret);
};

#endif
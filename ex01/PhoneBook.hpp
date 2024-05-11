/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:38:45 by nazouz            #+#    #+#             */
/*   Updated: 2024/05/11 13:24:51 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact			contacts[8];
		int				contactsCount;
	public:

		PhoneBook();
		~PhoneBook();

		void			addContact();
		void			searchContacts();
		void			displayContactsTable();
};

#endif
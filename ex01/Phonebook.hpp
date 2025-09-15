#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

class PhoneBook
{
	private:
		Contact contacts[8];
		int contactId;
		int nextIndex;

		std::string promptField(const std::string &fieldName) const;
		static std::string formatField(const std::string &value);
	public:
		PhoneBook();

		void addContact();
		void displayContacts() const;
		void displayContactsDetail(int index) const;

		int getTotalContacts() const;
};

#endif
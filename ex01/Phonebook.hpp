#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int contactId;
		int nextIndex;
	public:
		PhoneBook();

		void addContact();
		void displayContacts() const;
		void displayContactsDetail(int index) const;

		int getTotalContacts() const;
};

#endif
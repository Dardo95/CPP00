#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook {
private:
	Contact contacts[8];
	int count;
	int next;
	static std::string fit10(const std::string& s);

public:
	PhoneBook();
	void addContact(const Contact& c);
	int size() const;

	void printTable() const;
	bool printByIndex(int idx) const;
};


#endif

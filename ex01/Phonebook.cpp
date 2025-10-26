#include "Phonebook.hpp"

PhoneBook::PhoneBook() : count(0), next (0) {}

void PhoneBook::addContact(const Contact& c) {
	contacts[next] = c;
	next = (next + 1) % 8;
	if (count < 8) count++;
}

int PhoneBook::size() const { return count; }


#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook() : count(0), next (0) {}

void PhoneBook::addContact(const Contact& c) {
	contacts[next] = c;
	next = (next + 1) % 8;
	if (count < 8) count++;
}

int PhoneBook::size() const { return count; }

std::string PhoneBook::fit10(const std::string& s){
	if (s.length() <= 10)
		return s;
	else
		return s.substr(0, 9) + ".";
}

void PhoneBook::printTable()const {
	std::cout	<< std::setw(10) << std::right << "Index" << "|"
				<< std::setw(10) << std::right << "First Name" << "|"
				<< std::setw(10) << std::right << "Last Name" << "|"
				<< std::setw(10) << std::right << "Nickname" << "\n";

	for (int i = 0; i < count; ++i) {
		std::cout	<< std::setw(10) << std::right << i << "|"
					<< std::setw(10) << std::right << fit10(contacts[i].getFirstName()) << "|"
					<< std::setw(10) << std::right << fit10(contacts[i].getLastName()) << "|"
					<< std::setw(10) << std::right << fit10(contacts[i].getNickName()) << "\n";
	}
}

bool PhoneBook::printByIndex(int idx) const {
	if (idx < 0 || idx >= count)
		return false;

	std::cout << "First name: " << contacts[idx].getFirstName() << "\n";
	std::cout << "Last name: " << contacts[idx].getLastName() << "\n";
	std::cout << "Nickname: " << contacts[idx].getNickName() << "\n";
	std::cout << "Phone number: " << contacts[idx].getPhoneNumber() << "\n";
	std::cout << "Darkest secret: " << contacts[idx].getDarkestSecret() << "\n";

	return true;
}
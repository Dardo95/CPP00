/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 09:14:51 by enogueir          #+#    #+#             */
/*   Updated: 2025/09/16 13:06:29 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(): contactId(0), nextIndex(0){}

int PhoneBook::getTotalContacts()const {
    return contactId;
}

std::string PhoneBook::promptField(const std::string &fieldName) const
{
    std::string input;
    while(true)
    {
        std::cout << "Enter " << fieldName << ": ";
        if (!std::getline(std::cin, input))
        {
            return "";
        }
        if(!input.empty())
        {
            return input;
        }
        std::cout << "Field cannot is Empty. Try again\n";
    }
}

void PhoneBook::addContact()
{
    Contact newContact;
    std::string str;
    
    str = promptField("First Name");
    if (str.empty()) return;
    newContact.setFirstName(str);

    str = promptField("Last Name");
    if (str.empty()) return;
    newContact.setLastName(str);

    str = promptField("Nick Name");
    if (str.empty()) return;
    newContact.setNickName(str);

    str = promptField("Phone Number");
    if (str.empty()) return;
    newContact.setPhoneNumber(str);

    str = promptField("Darkest Secret");
    if (str.empty()) return;
    newContact.setDarkestSecret(str);

    contacts[nextIndex] = newContact;

    if (contactId < 8)
        contactId++;
    nextIndex = (nextIndex + 1) % 8;

    std::cout << "Contac saved Successfully\n"; 
}

std::string PhoneBook::formatField(const std::string &value)
{
    if (value.length() > 10)
        return value.substr(0, 9) + ".";
    return value;
}

void PhoneBook::displayContacts() const
{
    if (contactId == 0)
    {
        std::cout << "Phone is Empty\n";
        return;
    }
    
    std::cout   << std::setw(10) << "Index" << "|"
                << std::setw(10) << "First Name" << "|"
                << std::setw(10) << "Last Name" << "|"
                << std::setw(10) << "Nickname" << "\n";
    
    for (int i = 0; i < contactId; ++i)
    {
        const Contact &c = contacts[i];
        std::cout   << std::setw(10) << (i + 1) << "|"
                    << std::setw(10) << formatField(c.getFirstName()) << "|"
                    << std::setw(10) << formatField(c.getLastName()) << "|"
                    << std::setw(10) << formatField(c.getNickName()) << "|";
    }

    
}
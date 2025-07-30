/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:04:41 by enogueir          #+#    #+#             */
/*   Updated: 2025/07/30 09:19:48 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNumber = "";
	this->darkestSecret = "";
}

void Contact::setFirstName(const std::string &value)
{
	this->firstName = value;
}

void Contact::setLastName(const std::string &value)
{
	this->lastName = value;
}

void Contact::setNickName(const std::string &value)
{
	this->nickName = value;
}

void Contact::setPhoneNumber(const std::string &value)
{
	this->phoneNumber = value;
}

void Contact::setDarkestSecret(const  std::string &value)
{
	this->darkestSecret = value;
}

std::string Contact::getFirstname() const
{
	return this->firstName;
}

std::string Contact::getLastName() const
{
	return this->lastName;
}

std::string Contact::getNickName() const
{
	return this->nickName;
}

std::string Contact::getPhoneNumber() const
{
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return this->darkestSecret;
}

bool Contact::isEmpty() const
{
	return this->firstName.empty() &&
	this->lastName.empty() &&
	this->nickName.empty() &&
	this->phoneNumber.empty() &&
	this->darkestSecret.empty();
}
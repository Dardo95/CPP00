/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:04:41 by enogueir          #+#    #+#             */
/*   Updated: 2025/07/29 17:24:52 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contac()
{
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->lastPhoneNumber = "";
	this->darkestSecret = "";
}

void contact::setFirstName(const std:string &value)
{
	this->firstName = value;
}

void contact::setLastName(const std::string &value)
{
	this->lastName = value;
}

void contact::setNickName(const std::string &value)
{
	this->nickName = value;
}

void contact::setPhoneNumber(const std::string &value)
{
	this->phoneNumber = value;
}

void contact::setDarkSecret(const  std::string &value)
{
	this->darkestSecret
}

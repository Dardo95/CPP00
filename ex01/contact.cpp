#include "Contact.hpp"

Contact::Contact() {}

void Contact::setFirstName(const std::string& firstName){this->firstName = firstName; }
void Contact::setLastName(const std::string& lastName){ this->lastName = lastName; }
void Contact::setNickName(const std::string& nickname){ this->nickName = nickname; }
void Contact::setPhoneNumber(const std::string& phoneNumber){ this->phoneNumber = phoneNumber; }
void Contact::setDarkestSecret(const std::string& darkestSecret){ this->darkestSecret = darkestSecret; }

const std::string& Contact::getFirstName() const { return firstName; }
const std::string& Contact::getLastName() const { return lastName; }
const std::string& Contact::getNickName() const { return nickName; }
const std::string& Contact::getPhoneNumber() const { return phoneNumber; }
const std::string& Contact::getDarkestSecret() const { return darkestSecret; }
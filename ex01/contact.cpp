#include "Contact.hpp"

Contact::Contact() {}

void Contact::setFirstName(const std::string& name){ firstName = name; }

const std::string& Contact::getFirstName() const { return firstName; }
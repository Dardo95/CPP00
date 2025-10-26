#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
    PhoneBook pb;
    Contact c; c.setFirstName("Ryner");
    pb.addContact(c);
    std::cout << "Size: " << pb.size() << "\n"; // esperado: 1
    return 0;
}

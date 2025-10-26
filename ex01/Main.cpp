#include <iostream>
#include "Contact.hpp"

int main() {
    Contact c;

    c.setFirstName("Ryner");
    c.setLastName("al'Thor");
    c.setNickName("Luz");
    c.setPhoneNumber("123456789");
    c.setDarkestSecret("Ama leer");

    std::cout << "Name: " << c.getFirstName() << "\n";
    std::cout << "Last Name: " << c.getLastName() << "\n";
    std::cout << "Alias: " << c.getNickName() << "\n";
    std::cout << "Phone: " << c.getPhoneNumber() << "\n";
    std::cout << "Secret: " << c.getDarkestSecret() << "\n";

    return 0;
}

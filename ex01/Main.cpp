#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
    PhoneBook pb;

    Contact a; a.setFirstName("Ryner"); a.setLastName("al'Thor"); a.setNickname("Luz");
    Contact b; b.setFirstName("Mat");   b.setLastName("Cauthon"); b.setNickname("Gambler");
    pb.addContact(a);
    pb.addContact(b);

    pb.printTable();

    std::cout << "Index a mostrar: ";
    std::string s; std::getline(std::cin, s);
    int idx = 0;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] < '0' || s[i] > '9') { std::cout << "Índice inválido\n"; return 0; }
        idx = idx * 10 + (s[i] - '0');
    }

    if (!pb.printByIndex(idx)) std::cout << "Fuera de rango\n";
    return 0;
}

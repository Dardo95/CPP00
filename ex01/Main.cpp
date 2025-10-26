#include <iostream>
#include <string>
#include <cctype>
#include "Contact.hpp"
#include "PhoneBook.hpp"

static std::string trim(const std::string& s){
        size_t start = s.find_first_not_of(" \t\r\n");
        if (start == std::string::npos)
            return "";
        size_t end = s.find_last_not_of(" \t\r\n");
        return s.substr(start, end - start + 1);
}




static std::string promptNonEmpty(const std::string& label) {
    std::string s;
    while (true) {
        std::cout << label;
        if (!std::getline(std::cin, s))
            return "";
        s = trim(s);
        if (!s.empty())
            return s;
        std::cout << "Campo obligatorio. Intenta de nuevo.\n";
    }
}

static bool parseIndex(const std::string& in, int& out) {
    if (in.empty())
        return false;
    for (size_t i = 0; i < in.size(); ++i) {
        unsigned char ch = static_cast<unsigned char>(in[i]);
        if (!std::isdigit(ch))
            return false;
    }
    long v = 0;
    for (size_t i = 0; i < in.size(); ++i) {
        v = v * 10 + (in[i] - '0');
        if (v > 1000000)
            break; // tope arbitrario
    }
    out = static_cast<int>(v);
    return true;
}

// --- Programa principal ---
int main() {
    PhoneBook pb;
    std::string cmd;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, cmd))
            break;

        if (cmd == "ADD") {
            Contact c;
            std::string s;

            s = promptNonEmpty("First name: ");
            if (s.empty())
                break;
            c.setFirstName(s);

            s = promptNonEmpty("Last name: ");
            if (s.empty())
                break;
            c.setLastName(s);

            s = promptNonEmpty("Nickname: ");
            if (s.empty())
                break;
            c.setNickName(s);

            s = promptNonEmpty("Phone number: ");
            if (s.empty())
                break;
            c.setPhoneNumber(s);

            s = promptNonEmpty("Darkest secret: ");
            if (s.empty())
                break;
            c.setDarkestSecret(s);

            pb.addContact(c);
            std::cout << "Contacto guardado.\n";

        } else if (cmd == "SEARCH") {
            if (pb.size() == 0) {
                std::cout << "No hay contactos.\n";
            } else {
                pb.printTable();
                std::cout << "Index a mostrar: ";
                std::string in;
                if (!std::getline(std::cin, in))
                    break;
                int idx = -1;
                if (!parseIndex(in, idx)) {
                    std::cout << "Índice inválido.\n";
                } else if (!pb.printByIndex(idx)) {
                    std::cout << "Índice fuera de rango.\n";
                }
            }

        } else if (cmd == "EXIT") {
            break;
        } else {
            // Ignorar otros comandos
        }
    }
    return 0;
}

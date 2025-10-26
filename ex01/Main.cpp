#include <iostream>
#include "Contact.hpp"

int main ()
{
	Contact c;

	std::cout << "Inicialmente '" << c.getFirstName() << "'\n";

	c.setFirstName("Ryner");
	std::cout << "Tras setFirstName: '" << c.getFirstName() << "'\n";

	return 0;
}
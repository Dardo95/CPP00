#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			std::string s = argv[i];
			for (size_t j = 0; j < s.length(); ++j)
				std::cout << char(std::toupper(s[j]));
			if (i + 1 < argc)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return 0;
}

#include <iostream>       // std::cout
#include <string>         // std::string

int main()
{
	std::string str("There are two needles in this haystack with needles.");
	std::string str4(" There are two needles in this haystack with needles. ");
	std::string str2("needle");
	std::string str3(" needles ");
	// different member versions of find in the same order as above:
	std::size_t found = str.find(str2);
	if (found != std::string::npos)
		std::cout << "first 'needle' found at: " << found << '\n';

	std::size_t found2 = str4.find(str3);
	if (found2 != std::string::npos)
		std::cout << "first ' needles ' found at: " << found2 << '\n';

	found = str.find("needles are small", found + 1, 6);
	if (found != std::string::npos)
		std::cout << "second 'needle' found at: " << found << '\n';

	found = str.find("haystack");
	if (found != std::string::npos)
		std::cout << "'haystack' also found at: " << found << '\n';

	found = str.find('.');
	if (found != std::string::npos)
		std::cout << "Period found at: " << found << '\n';

	// let's replace the first needle:
	str.replace(str.find(str2), str2.length(), "preposition");
	std::cout << str << '\n';

	return 0;
}
#include <iostream>
#include <iomanip>

struct ziko
{
	ziko() {}

	void	operator+(ziko& b)
	{
		std::cout << "YEAAAH" << '\n';
	}
};

std::ostream&	operator<<(std::ostream& out, ziko& obj)
{
	out << "hello";
	return (out);
}

int main()
{
	// ziko a;
	// ziko b;
	std::string str1 = "abcdef";
	std::cout << str1.length() << std::endl;
	str1.replace(2,3,"V");
	std::cout << str1 << std::endl;
	
	// std::cout << std::left << std::setfill('0') << std::setw(10) << "hello" << std::endl;
}
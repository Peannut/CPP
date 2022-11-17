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

	// std::cout << a << std::endl;
	std::cout << std::setw(10);
	std::cout << "hjjjjjjjhnb";

}
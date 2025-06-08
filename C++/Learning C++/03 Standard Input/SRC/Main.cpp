#include <iostream>


int main()
{
	std::cout << "Please enter a number and press enter: ";
	int x = 0;
	std::cin >> x;
	std::cout << "You entered: " << x << std::endl;

	std::cout << "Please enter two numbers seperated by a space and press enter: ";
	int x1 = 0;
	int y1 = 0;
	std::cin >> x1 >> y1;
	std::cout << "You entered: " << x1 << " and " << y1 << std::endl;

	std::cout << "Please enter a character, an integer, and a double: ";
	char c2 = 0;
	int x2 = 0;
	double d2 = 0.0;
	std::cin >> c2 >> x2 >> d2;
	std::cout << "You entered: " << c2 << " and " << x2 << " and " << d2 << std::endl;

	std::cin.get();
}
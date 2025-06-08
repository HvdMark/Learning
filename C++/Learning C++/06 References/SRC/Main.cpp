#include <iostream>


int main()
{
	// A reference type is an alias to an existing object in memory

	int x1 = 123;			// Declare an integer with a value of 123 
	int& y1 = x1;			// y1 is pointing to the same object in memory
	std::cout << "Value of x1            : " << x1 << std::endl;
	std::cout << "Value of y1            : " << y1 << std::endl;

	std::cout << "\n\n";

	x1 = 456;
	std::cout << "Value of x1 (modified) : " << x1 << std::endl;
	std::cout << "Value of y1            : " << y1 << std::endl;

	std::cout << "\n\n";

	y1 = 789;
	std::cout << "Value of x1            : " << x1 << std::endl;
	std::cout << "Value of y1 (modified) : " << y1 << std::endl;

	std::cout << "\n\n";

	int x2 = 123;
	const int& y2 = x2;
	std::cout << "Value of x2            : " << x2 << std::endl;
	std::cout << "Value of y2            : " << y2 << std::endl;

	std::cout << "\n\n";

	x2 = 456;
	std::cout << "Value of x2 (modified) : " << x2 << std::endl;
	std::cout << "Value of y2            : " << y2 << std::endl;

	// y2 = 789; This is not possible because y2 is a const reference, so it's read-only


	std::cin.get();
}
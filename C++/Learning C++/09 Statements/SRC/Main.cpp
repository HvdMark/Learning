#include <iostream>


int main()
{
	// if statement
	bool b1 = true;
	if (b1)
		std::cout << "The condition is true" << std::endl;

	// if-else statement
	bool b2 = true;
	if (b2)
		std::cout << "The condition is true" << std::endl;
	else
		std::cout << "The condition is false" << std::endl;

	// Conditional Expression
	bool b3 = true;
	int  x3 = 0;
	if (b3)
		x3 = 1;
	else
		x3 = 0;
	
	std::cout << "The value of x3: " << x3 << std::endl;

	// Logical Operators
	// && = Logical AND
	// || = Logical OR

	bool a4 = true;
	bool b4 = true;
	if (a4 && b4)						// if a4 AND b4 are true, then ...
		std::cout << "The entire condition is true" << std::endl;
	else
		std::cout << "The entire condition is false" << std::endl;

	bool a5 = false;
	bool b5 = false;
	if (a5 || b5)						// if a5 OR b5 is true, then ...
		std::cout << "The entire condition is true" << std::endl;
	else
		std::cout << "The entire condition is false" << std::endl;

	// Comparison Operators
	// == = Equal to
	// != = Not equal to
	// <  = Less then
	// <= = Less then or equal to
	// >  = Greater then
	// >= = Greater then or equal to

	int x6 = 5;
	std::cout << "The value x6 is: "<< x6 << std::endl;

	if (x6 == 5)
		std::cout << "The value x6 is equal to 5" << std::endl;

	if (x6 > 4)
		std::cout << "The value x6 is greater to 4" << std::endl;

	if (x6 >= 5)
		std::cout << "The value x6 is greater then or equal to 5" << std::endl;

	if (x6 != 20)
		std::cout << "The value x6 is is not equal to 20" << std::endl;

	// Logical Operators and Comparison Operators
	if (x6 > 2 && x6 < 10)
		std::cout << "The value x6 is greater then 2 and less then 10" << std::endl;

	bool b6 = true;
	if (x6 > 2 && b6)
		std::cout << "The value x6 is greater then 2 and b6 is true" << std::endl;

	// Switch statement
	int x7 = 3;
	switch (x7)
	{
	case 1:
		std::cout << "The value x7 is 1" << std::endl;
		break;
	case 2:
		std::cout << "The value x7 is 2" << std::endl;
		break;
	case 3:
		std::cout << "The value x7 is 3" << std::endl;
		break;
	default:
		std::cout << "The value x7 is non of the above" << std::endl;
		break;
	}

	// For statement
	for (int x8 = 0; x8 < 10; x8++)
		std::cout << "The counter is: " << x8 << std::endl;

	// While statement
	int x9 = 0;
	while (x9 < 10)
	{
		std::cout << "The value x9 is " << x9 << std::endl;
		x9++;
	}

	// Do statement
	int x10 = 0;
	do
	{
		std::cout << "The value x10 is " << x10 << std::endl;
		x10++;
	} while (x10 < 10);

	std::cin.get();
}
#include <iostream>


int main()
{
	// ********** Assignment Operator **********
	// The = operator assigns a value to a variable/object
	char c = 'c';			// Declare a  variable c and assign the value of 'c'
	std::cout << "c          = " << c << std::endl;
	
	c = 'd';				// Assign to variable c a new value of 'd'
	std::cout << "c          = " << c << std::endl;

	int x = 123;			// Declare a  variable x and assign the value of 123
	std::cout << "x          = " << x << std::endl;

	x = 456;				// Assign to variable x a new value of 456
	std::cout << "x          = " << x << std::endl;

	int y = 789;			// Declare a  variable y and assign the value of 789
	std::cout << "y          = " << y << std::endl;

	y = x;					// Assign to variable y the value of x
	std::cout << "y          = " << y << std::endl;

	std::cout << "\n\n";

	// ********** Arithmetic Operators **********
	// +	Addition
	// -	Subtraction
	// *	Multiplication
	// /	Division
	// %	Modulo (remainder)
	int x1 = 10;
	std::cout << "x1         = " << x1 << std::endl;

	int y1 = 3;
	std::cout << "y1         = " << y1 << std::endl;

	int result = x1 + y1;	// Addition
	std::cout << "x1 + y1    = " << result << std::endl;

	result = x1 - y1;		// Subtraction
	std::cout << "x1 - y1    = " << result << std::endl;

	result = x1 * y1;		// Multiplication
	std::cout << "x1 * y1    = " << result << std::endl;

	result = x1 / y1;		// Division (will be truncated because result is int and not double)
	std::cout << "x1 / y1    = " << result << std::endl;

	result = x1 % y1;		// Multiplication
	std::cout << "x1 % y1    = " << result << std::endl;

	std::cout << "\n\n";

	// ********** Compound Assignment Operators **********
	// +=	Addition
	// -=	Subtraction
	// *=	Multiplication
	// /=	Division
	// %=	Modulo (remainder)
	int x2 = 123;
	std::cout << "x2         = " << x2 << std::endl;

	x2 += 10;
	std::cout << "x2 += 10   = " << x2 << std::endl;

	x2 -= 10;
	std::cout << "x2 -= 10   = " << x2 << std::endl;

	x2 *= 10;
	std::cout << "x2 *= 10   = " << x2 << std::endl;

	x2 /= 10;
	std::cout << "x2 /= 10   = " << x2 << std::endl;

	std::cout << "\n\n";

	// ********** Compound Assignment Operators **********
	// ++x	Pre  increment operator: Value is added first and then the variable/object is accessed/evaluated
	// x++	Post increment operator: Variable/object is accessed/evaluated first the the value is added
	// --x	Pre  decrement operator: Value is added first and then the variable/object is accessed/evaluated
	// x--	Post decrement operator: Variable/object is accessed/evaluated first the the value is added

	int x3 = 123;
	std::cout << "x3         = " << x3 << std::endl;

	x3++;
	std::cout << "x3++       = " << x3 << std::endl;

	++x3;
	std::cout << "++x3       = " << x3 << std::endl;

	x3--;
	std::cout << "x3--       = " << x3 << std::endl;

	--x3;
	std::cout << "--x3       = " << x3 << std::endl;


	std::cin.get();
}
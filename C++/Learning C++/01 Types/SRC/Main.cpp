#include <iostream>


int main()
{
	// ********** Fundamental Types **********

	// Boolean Type
	bool b;					// Declare an uninitialized bool variable 'b'
	std::cout << "The value of variable b is unitialized, can be anything" << std::endl;
	bool b1 = true;			// Declare an   initialized bool variable 'b1' and give it the value of true
	std::cout << "The value of variable b1 is " << b1 << std::endl;
	bool b2{ false };		// Declare an   initialized bool variable 'b2' and give it the value of false
	std::cout << "The value of variable b2 is " << b2 << std::endl;

	// Character Type
	char c = 'a';			// Declare an   initialized bool variable 'c' and give it the value of 'a'
	std::cout << "The value of variable c is " << c << std::endl;
	c = 'B';				// Declare the value of variable c into 'B'
	std::cout << "The value of variable c is " << c << std::endl;
	std::cout << "The size of type char is " << sizeof(char) << " byte(s)" << std::endl;

	char c1 = 'a';			// Declare an initialized char variable 'c1' and give it the value of 'a'
	char c2 = 97;			// Declare an initialized char variable 'c1' and give it the value of 'a' using its numeric value

	// Integer Types
	int x = 123;			// Declare an initialized int variable 'x' and give it the value of 123
	int y = -256;			// Declare an initialized int variable 'y' and give it the value of -256
	std::cout << "The value of variable x is " << x << ", the value of variable y is " << y << std::endl;

	int z;					// Declare an uninitialized int variable 'z'
	z = 10;					// Decimal literal 10
	std::cout << "The value of variable z is " << z << std::endl;
	z = 012;				// Octal literal 012 = decimal 10
	std::cout << "The value of variable z is " << z << std::endl;
	z = 0xA;				// Hexadecimal literal 0xA = decimal 10
	std::cout << "The value of variable z is " << z << std::endl;

	// Floating-Point Types
	double d = 3.14;
	std::cout << "The value of variable d is " << d << std::endl;
	double d1 = 123.456;
	std::cout << "The value of variable d1 is " << d1 << std::endl;
	double d2 = 1.;
	std::cout << "The value of variable d2 is " << d2 << std::endl;
	double d3 = 0.15;
	std::cout << "The value of variable d3 is " << d3 << std::endl;
	double d4 = .15;
	std::cout << "The value of variable d4 is " << d4 << std::endl;
	double d5 = 3.14e10;
	std::cout << "The value of variable d5 is " << d5 << std::endl;

	// Type Modifiers (unsigned)
	unsigned long int li = 4294967295;
	std::cout << "The value of the unsigned integer variable li is " << li << std::endl;









	std::cin.get();
}
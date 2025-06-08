#include <iostream>


int main()
{
	// The auto specifier deduces the type of an object based on the object's initializer type.
	auto c1 = 'a';					// Char type
	auto x1 = 123;					// Int type
	auto d1 = 123.456;				// Double type
	
	// use the auto keyword as part of a reference type.
	int  x2 = 123;					// Declare a variable x2 of type int and give it the value of 123
	auto& y2 = x2;					// y2 is of int& type

	const auto x3 = 123;			// x3 is of const int type
	
	
	std::cin.get();
}
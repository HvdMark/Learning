#include <iostream>


int main()
{
	// By using const the object will be read-only (immutable)
	const int n1 = 5;						// Declare a const variable n1 of type int and assign the value of 5
	int arr[n1] = { 10,20,30,40,50 };		// Use the const variable as array size
	
	//n++;									// This won't work because you can't modify a read-only object
	//const int n2;							// This won't wprk either because it's not initialized
	const int n2 = 123;						// This is OKE

	// Const modifies an entire type, not just the object
	// const int and int are two different types, the first one is const qualified
	// The is also constexpr, this is a constant that can be evaluated at compile time.

	constexpr int n3 = 123;					// OK, 123 is a compile-time constant expression
	
	constexpr double d3 = 456.78;			// OK, 456.78 is a compile-time constant expression
	constexpr double d4 = d3;				// OK, d4 is a constant expression

	int n4 = 123;							// Declare a variable n4 of type int and assign the value of 123
	//constexpr int n5 = n4;				// Errorm n4 is not known at compile time.


	
	std::cin.get();
}
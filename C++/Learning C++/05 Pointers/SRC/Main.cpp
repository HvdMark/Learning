#include <iostream>


int main()
{
	// What are pointers
	// A pointer is an integer that holds a memory address

	int* p1;			// Declare an uninitialized pointer of type int*.
						// You say: p1 is of type int*

	char* c2;			// Declare an uninitialized pointer of type char*
						// You say: c2 is of type char*

	int  x3 = 123;		// Declare a integer with a value of 123
	int* p3 = &x3;		// Declare a integer p3 and point it to x3 using the address-of operator '&'
						// You say: p3 points TO x3;

	char c4 = 'A';		// Declare a char with a value of 'A'
	char* p4 = &c4;		// Declare a char p4 and point it to c4 using the address-of operator '&'
						// You say: p4 points TO c4;

	char* p5 = nullptr;	// Initialzie a pointer that doesn't point to an object
						// You say: p5 is now a null pointer

	// Accessing the value of an object pointed to by a pointer
	int x6a = 123;		// Declare an integer with a value of 123
	int* p6 = &x6a;		// Declare a char p6 and point it to c6a using the address-of operator '&'
	int x6b = *p6;		// Get the value of the location pointed to using dereferencing operator '*'

	std::cout << "Value of x6a                    : " << x6a << std::endl;
	std::cout << "Address of x6a (&x6a)           : " << &x6a << std::endl;
	std::cout << "Address of p6                   : " << p6 << std::endl;
	std::cout << "Dereferenced value of x6b (*p6) : " << *p6 << std::endl;

	std::cout << "\n\n";

	// Accessing the value of an object pointed to by a pointer
	char c7a = 'A';		// Declare a char with a value of 'A'
	char* p7 = &c7a;	// Declare a char p6 and point it to c6a using the address-of operator '&'
	char x7b = *p7;		// Get the value of the location pointed to using dereferencing operator '*'

	std::cout << "Value of c7a                    : " << c7a << std::endl;
	std::cout << "Address of c7a (&c7a)           : " << static_cast<void*>(&c7a) << std::endl;
	std::cout << "Address of p7                   : " << static_cast<void*>(p7) << std::endl;
	std::cout << "Dereferenced value of x7b (*p7) : " << *p7 << std::endl;

	std::cout << "\n\n";

	// Modifying the value of an object pointed to by a pointer
	int x8a = 123;		// Declare an integer with a value of 123
	int* p8 = &x8a;		// Declare a char p8 and point it to c8a using the address-of operator '&'
	int x8b = *p8;		// Get the value of the location pointed to using dereferencing operator '*'

	std::cout << "Value of x8a                    : " << x8a << std::endl;
	std::cout << "Address of x8a (&x8a)           : " << &x8a << std::endl;
	std::cout << "Address of p8                   : " << p8 << std::endl;
	std::cout << "Dereferenced value of x8b (*p8) : " << *p8 << std::endl;
	*p8 = 456;
	std::cout << "Modified value of x8b (*p8)     : " << *p8 << std::endl;






	
	
	std::cin.get();
}
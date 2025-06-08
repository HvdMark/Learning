#include <iostream>


// ********** Local Scope **********
void myLocalScopeFunction()
{
	int x = 123;			// <-- Here starts the x scope
}							// <-- Here ends the x scope

// ********** Block Scope **********
void myBlcokScopeFunction()
{
	int x = 123;			// <-- Here starts the 1st x scope
	{						// <-- Start new block
		int x = 456;		// <-- Here starts the 2nd x scope
	}						// <-- Block ends + Here ends the 2nd x scope
							// <-- 1st x resumes here
}							// <-- Block ends + Here ends the 1st x scope

// ********** New and Delete operators **********
void myNewDelFunction()
{
	// Integer example
	{
		int* p = new int;		// Allocate space for one integer					
		*p = 123;				// p points to the newly allocated memory of the integer
		std::cout << "The pointed-to (dereferenced) value is: " << *p << std::endl;
		delete p;				// Free the allocated memory
	}

	// Array example
	{
		int* p = new int[3];	// Allocate space for three integers
		p[0] = 1;				// p points to the first element of the array
		p[1] = 2;				//
		p[2] = 3;				//
		std::cout << "The pointed-to (dereferenced) value is: " << p[0] << ' ' << p[1] << ' ' << p[2] << std::endl;
		delete[] p;				// Free the allocated memory
	}
}


int main()
{
	myLocalScopeFunction();
	myBlcokScopeFunction();
	myNewDelFunction();
	std::cin.get();
}
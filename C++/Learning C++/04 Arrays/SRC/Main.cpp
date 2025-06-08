#include <iostream>


int main()
{
	// ********** Arrays **********

	// Declaration
	char arr1[5];							// Declare an array of 5 characters
	int  arr2[5];							// Declare an array of 5 integers
	int  arr3[5] = { 10,20,30,40,50 };		// Declare an array of 5 integers with an initialization list

	for (int i = 0; i < 5; i++)
		std::cout << arr3[i] << " ";

	std::cout << "\n\n";

	// Accessing individual elements of an array, first elements starts at 0
	arr3[2] = 100;
	for (int i = 0; i < 5; i++)
		std::cout << arr3[i] << " ";

	std::cout << "\n\n";
	

	std::cin.get();
}
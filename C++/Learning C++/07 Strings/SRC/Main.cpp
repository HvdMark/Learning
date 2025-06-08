#include <iostream>
#include <string>

int main()
{
	// Defining a string
	std::string s1 = "Hello World!";		// Declare a variable s1 of type string and give it the value of "Hello World!"
	std::cout << s1 << std::endl;			// print out the string of variable s1

	std::cout << "\n\n";

	// Concatenating strings using the compound operator +=
	std::string s2 = "Hello ";				// Declare a variable s2 of type string and give it the value of "Hello "
	s2 += "World.";							// Add a string literal using the compound operator +=
	std::cout << s2 << std::endl;			// print out the string of variable s2

	std::cout << "\n\n";

	// Concatenating strings with a char using the compound operator +=
	std::string s3 = "Hello";				// Declare a variable s3 of type string and give it the value of "Hello"
	char c3 = '!';							// Declare a variable c3 of type char and give it the value of "!"
	s3 += c3;								// Add the char to the string using the compound operator +=
	std::cout << s3 << std::endl;			// print out the string of variable s3

	std::cout << "\n\n";

	// Concatenating strings with a char using the + operator
	std::string s4a = "Hello ";				// Declare a variable s4a of type string and give it the value of "Hello "
	std::string s4b = "World";				// Declare a variable s4b of type string and give it the value of "World"
	std::string s4  = s4a + s4b;			// Concatenate the strings
	std::cout << s4 << std::endl;			// print out the string of variable s4

	std::cout << "\n\n";

	// Accessing charcters
	std::string s5 = "Hello World.";		// Declare a variable s5 of type string and give it the value of "Hello World."
	char c5a = s5[0];						// Get the first chararcter of s5 using the subscript operator []
	char c5b = s5.at(0);					// Get the first chararcter of s5 using the function .at(index)
	char c5c = s5[6];						// Declare a variable s5 of type string and give it the value of "Hello World."
	
	std::cout << "String s5         : " << s5 << std::endl;
	std::cout << "char c5a s5[0]    : " << c5a << std::endl;
	std::cout << "char c5b s5.at(0) : " << c5b << std::endl;
	std::cout << "char c5c s5[6]    : " << c5c << std::endl;

	std::cout << "\n\n";

	// Comparing strings (case sensitive)
	std::string s6 = "Hello";				// Declare a variable s6 of type string and give it the value of "Hello"
	if (s6 == "Hello")
		std::cout << "s6 is equal to \"Hello\"" << std::endl;
	else
		std::cout << "s6 is not equal to \"Hello\"" << std::endl;

	std::cout << "\n\n";

	// String Input
	std::string s7;							// Declare a variable s7 of type string
	std::cout << "Please enter a string: ";
	std::getline(std::cin, s7);				// Use getline because it can contain white spaces, cin.get only accepts the part of a string
	std::cout << "You entered: " << s7 << std::endl;

	std::cout << "\n\n";

	// Pointer to a string
	std::string s8 = "Hello World!";		// Declare a variable s8 of type string and give it the value of "Hello World!"
	std::cout << "c_str: " << s8.c_str();	// c_str() returns the pointer to the first element of the string

	std::cout << "\n\n";

	// Substrings
	std::string s9 = "Hello World!";		// Declare a variable s9 of type string and give it the value of "Hello World!"
	std::string subs9 = s9.substr(6, 5);	// Declare a cariable subs9, go to pos 6 and return 5 characters
	std::cout << "s9: " << s9;				// Print out the string of variable s9
	std::cout << "substr(6,5): " << subs9;	// Print out the string of variable subs9

	std::cout << "\n\n";

	// Finding a substring
	std::string s10 = "Hello World string";	// Declare a variable s9 of type string and give it the value of "Hello World!"
	std::string sFind = "World";
	std::string::size_type found = s10.find(sFind);
	if (found != std::string::npos)
		std::cout << "Substring found at position: " << found << std::endl;
	else
		std::cout << "Substring not found! " << std::endl;





	std::cin.get();
}
#include <iostream>

// type functionName(arguments)
//{
//	statement(s);
//	return type;
//}

// ***** Function Declaration *****

void myVoidFunction()		// Function declaration
{
	// void is a type that represents nothing
	// a void function doesnt need a return type
	std::cout << "Hello from a function" << std::endl;
}

int mySquaredFunction(int x)	// Function declaration
{
	return x * x;
}

int mySum(int x, int y)	// Function declaration
{
	return x + y;
}

// ***** Passing Arguments by Value / Copy *****
// When passing a value to a function a copy of the argument is made and passed to the function
void myByValueFunction(int byValue)
{
	std::cout << "An argument passed by value: " << byValue << std::endl;
	byValue = 1111;
}

// ***** Passing Arguments by Reference *****
// When passing a reference to a function the acual argument is passed to the function, the function can modify the value
void myByReferenceFunction(int& byReference)
{
	std::cout << "An argument passed by reference: " << byReference << std::endl;
	byReference = 2222;
}

// ***** Passing Arguments by Const Reference *****
// When passing a reference to a function the acual argument is passed to the function, the function can NOT modify the value because const is read-only
void myByReferenceFunction(const std::string& byConstReference)
{
	std::cout << "An argument passed by const reference: " << byConstReference << std::endl;
}


// ***** Function overloading *****
// Having the same function name with different arguments
void myPrint(char param)
{
	std::cout << "Printing a character: " << param << std::endl;
}

void myPrint(int param)
{
	std::cout << "Printing an integer: " << param << std::endl;
}

void myPrint(double param)
{
	std::cout << "Printing an double: " << param << std::endl;
}



int main()
{
	myVoidFunction();

	int myResult1 = mySquaredFunction(2);
	std::cout << "Number 2 squared is: " << myResult1 << std::endl;
	
	int myResult2 = mySum(5,10);
	std::cout << "The sum of 5 and 10 is: " << myResult2 << std::endl;


	int byValue = 2345;
	myByValueFunction(byValue);
	std::cout << "Value modified n function: " << byValue << std::endl;

	int byReference = 2345;
	myByReferenceFunction(byReference);
	std::cout << "Reference modified n function: " << byReference << std::endl;

	std::string byConstReference = "My String";
	myByReferenceFunction(byConstReference);

	myPrint('c');
	myPrint(123);
	myPrint(123.456);

	std::cin.get();
}
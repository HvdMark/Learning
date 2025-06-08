#include <iostream>

// -Classes - Introduction-----------------------------------------------------
class MyClass1							// Define an empty class
{
};							
// -Classes - Data Member Fields ----------------------------------------------
class MyClass2							// Define a class with member fields
{
	char   c;
	int    x;
	double d;
};
// -Classes - Member Functions-------------------------------------------------
class MyClass3a							// Define a class with member function
										// inside the class body
{
	void doSomething()
	{
		std::cout << "Hello World from MyClass3a" << std::endl;
	}
};

class MyClass3b							// Define a class with member function
										// outside the class body
{
	void doSomething();
};

void MyClass3b::doSomething()
{
	std::cout << "Hello World from MyClass3b" << std::endl;
}

class MyClass4							// Define a class with member field and member function
{
	int    x;
	void printx()
	{
		std::cout << "The value of x is " << x << std::endl;
	}
};
// -Classes - Access Specifiers -----------------------------------------------
class Base								// Define a class with Access Specifiers
{
private:								// Private members cannot be accessed (or viewed) from outside the class
	int pvt = 1;
protected:								// Derived class can see 
	int prot = 2;
public:									// Class itself can access any code inside the class
	int pub = 3;

	int getPUB()  { return pub; }
	int getPVT()  { return pvt; }
	int getPROT() { return prot; }
};

class PubDerived : private Base
{

};

// ----------------------------------------------------------------------------

int main()
{
	MyClass1	o1;						// Create an object o1  of type MyClass1
	MyClass2	o2;						// Create an object o2  of type MyClass2
	MyClass3a	o3a;						// Create an object o3a of type MyClass3a
	MyClass3b	o3b;						// Create an object o3b of type MyClass3b
	MyClass4	o4;						// Create an object o4  of type MyClass4

	Base		b;						// Create an object b   of type Base
	std::cout << "Private   = " << b.getPVT() << std::endl;
	std::cout << "Protected = " << b.getPROT() << std::endl;
	std::cout << "Public    = " << b.getPUB() << std::endl;

	PubDerived	d;						// Create an object d   of type Derived from Base
	std::cout << "Private   = " << d.getPVT() << std::endl;
	std::cout << "Protected = " << d.getPROT() << std::endl;
	std::cout << "Public    = " << d.getPUB() << std::endl;

//	std::cout << "Protected = " << d.getProt() << std::endl;
//	std::cout << "Public = " << d.getPUB << std::endl;

	std::cin.get();
}

//// ********** Class definition **********
//class MyOutsideClass
//{
//public:
//	int  x = 123;
//
//	void doSomething();
//	void doSomethingElse();
//	void printX(int x);
//};
//
//void MyOutsideClass::doSomething()
//{
//	std::cout << "This is doSometing from MyOutsideClass" << std::endl;
//}
//
//void MyOutsideClass::doSomethingElse()
//{
//	std::cout << "This is doSometingElse from MyOutsideClass" << std::endl;
//}
//
//void MyOutsideClass::printX(int x)
//{
//	std::cout << "The value of x is " << x << std::endl;
//}
//
//
//// ********** Class definition **********
//class MyInsideClass
//{
//private:										// self: full access / derived: public + protected / object of class: public
//	char   m_MyChar   = 0;						// private members should start with m or m_
//	int    m_MyInt    = 123;
//	double m_MyDouble = 123.456;
//
//	void PrintPrivate(std::string message)		// Private function
//	{
//		std::cout << "Print " << message << " from Private" << std::endl;
//	};
//
//protected:										// self: full access / derived: public + protected / object of class: public
//	void PrintProtected(std::string message)	// Protected function
//	{
//		std::cout << "Print " << message << " from Protected" << std::endl;
//	};
//
//public:											// self: full access / derived: public + protected / object of class: public
//	int    x, y;
//	int    xxx;
//	int*   ppp;
//
//	void PrintPublic(std::string message)		// Public function
//	{
//		std::cout << "Print " << message << " from Public" << std::endl;
//	};
//
//	MyInsideClass():MyInsideClass(100,200)
//	{
//		std::cout << "Default constructor with 100,200 as default" << std::endl;
//	};
//	
//	MyInsideClass(int xx, int yy)				// Constructor
//		: x(xx), y(yy)							// with member initializer list
//	{
//		std::cout << "Constructor called with member initializer list " << x << " and " << y << std::endl;
//	}
//
//	MyInsideClass(const MyInsideClass& rhs)
//		: xxx{ rhs.x }, ppp{ new int {*rhs.ppp} }
//	{
//		std::cout << "User-defined copy constructor invoked" << std::endl;
//	}
//
//
//	~MyInsideClass()							// Destructor
//	{
//		PrintPublic("Destructor");
//	};
//};
//
//
//
//
//int main()
//{
//	MyOutsideClass myOutsideClass;
//	myOutsideClass.doSomething();
//	myOutsideClass.doSomethingElse();
//	std::cout << "myOutsideClass    x = " << myOutsideClass.x << std::endl;
//	myOutsideClass.printX(12345);
//
//	std::cout << "=======================================================" << std::endl;
//
//	MyInsideClass myInsideClass(10, 15);
//	myInsideClass.PrintPublic("from main");
//	std::cout << "myInsideClass     x = " << myInsideClass.x << ", y = " << myInsideClass.y << std::endl;
//
//	std::cout << "=======================================================" << std::endl;
//
//	MyInsideClass myInsideClass1(1, 2);
//	MyInsideClass myInsideClass2 = myInsideClass1;
//
//	std::cout << "=======================================================" << std::endl;
//
//
//
//	std::cin.get();
//}
#include <iostream>

// ********** Best Practice camelCasing **********

class MyClass                               // class name starts with upper case
{
private:
    int m_data;                             // m_  stands for member data ans should be used in the private section
   
public:
    MyClass (int t_data)                    // t_ is for function parameters
        : m_data(t_data)                    // m_ is private member data
    {}

    int getData() const                     // Function names start with lower case
    {
        return m_data;
    }
};

const double PI = 3.14159265358979323;      // const names are all upper case

void myFunction()                           // Funcion names start with lower case, each word with upper case
{

}

// ********** Best Practice vars **********
int myVar = 1;



int main()
{
	std::cin.get();
}
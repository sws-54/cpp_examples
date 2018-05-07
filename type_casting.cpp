// cpp_examples - Type conversions 
//
// all the uses of Type conversions
//
// sws-54 - 2018-5-7

//////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

// 1- Implicit conversion

// Implicit conversion means it is a conversion that happend automatic in c++ 
// implicit conversion happe I between fundamental types int float double bool 
// Implicit conversion in constractor happend to simplify code c++ can do one implicit
// you can use (explicit) keyword befor constractor to disable implicit constracor 
/*
class MyClass 
{
	int x;
public:
    MyClass(int i) : x(i) {}; 
	void PrintStuff(const MyClass &e);
};

void MyClass::PrintStuff(const MyClass &e)
{
	cout << e.x << endl;
}

int main()
{
	// 
	int o = 10;
	float oo = o;
	double ooo = o;
	bool oooo = o;

	cout << ooo << endl;

	MyClass x = 100;   // implicit constructor
	x.PrintStuff(10); // implicit constructor

	system("pause");
}

*/


///////////////////////////////////////////////////////////////

// 2- type casting 

// there is two ways to do type casting c-like casting and functional casting
// int x = (int) i ; //c-casting
// int x = int(i) ; //functional casting
// this type casting is enough for most fundamental types 


/////////////////////////////////////////////////////////////////

// 3- casting 

// dynamic_cast : can only be used with pointer refrence and classes
// syntax : dynamic_cast <new type> (expression)
// used to cast pointers that point to classes to anther
// dynamic cast is used at run time to find the correct down cast
// it need one virtual function in base class
// it returns new type if successful and returns nullptr if failed


// static_cast : can perform conversions between pointers to related classes, 
// not only upcasts (from pointer-to-derived to pointer-to-base), but also downcasts 
// (from pointer-to-base to pointer-to-derived).


// reinterpret_cast : converts any pointer type to any other pointer type, even of unrelated classes


// const_cast : to turn const to non cost but we cant change the acual const 
// it used if we want to send const to non const parameters in funtion 


// typeid : returns type info obj used to compare to pointers on variables or object to check if are the same type
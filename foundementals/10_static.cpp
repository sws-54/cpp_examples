// cpp_examples - static
//
// all the uses of static 
//
// sws-54 - 2018-5-22

#include <iostream>
#include <string>

using namespace std;

///////////////////////////////////////////////////

// 1- static variable

// A static duration variable is one that retains its value even after 
// the scope in which it has been created has been exited!Static duration variables are only created(and initialized) 
// once, and then they are persisted throughout the life of the program.
// staitc variable it gives it internal linkage which restricts them from being seen/used outside of the file they are defined in
// if we want to use the same name of vairable in two files use static in one of them so it gets restricted
// if we cant to use the variable from the other file use keyword "extern" means look for it in other files

int static var = 10;

int extern v;


//////////////////////////////////////////////////

// 2- static in function

// here static means that the variable lifetime = the life time of the program not the function
// even if u call the function multiple time the the same variable will not get created again 
// the value of static will be carried to next function call
/*
void Sfunction(){

	static int count = 0;
	cout << count << endl;
	count++;
}


int main()
{
	for (int i = 0; i <= 10; i++)
	{
		Sfunction();
	}
	return 0;
}
*/

//////////////////////////////////////////////////

// 3- static in class

// 3.1 static member variables are shared by all objects of the class
// 3.2 static members exsist even if we dont create any object of the class
// 3.3 you must explicitly define the static member outside of the class, in the global scope.
// 3.4 adding const to static member variable enable us to define the variable inside class
/*
class MyClass
{
public:
	static int x;
};

int MyClass::x = 1; // 3.3


class S
{
public: 
	static const int var = 99; // 3.4
};

int main()
{
	MyClass obj1;
	MyClass obj2;

	cout << obj1.x << endl;

	obj2.x = 10; //3.1 becuse static vars are shared by all object if we change obj2 than obj1 static var will change
	
	cout << obj1.x << endl;

	cout << S::var << endl; // 3.2 static vars exsist even without creating Object


}
*/


// good uses of static member variable in class 
// get uniq id for every object of this class
/*
class IdProvider
{
	static int ID;
public:
	int GetId() { return ++ID; }
};

int IdProvider::ID = 0;

int main()
{
	IdProvider obj1;
	IdProvider obj2;
	IdProvider obj3;
	IdProvider obj4;

	cout << obj1.GetId() << endl;
	cout << obj2.GetId() << endl;
	cout << obj3.GetId() << endl;
	cout << obj4.GetId() << endl;

}
*/

////////////////////////////////////////////////////

// 4- static class function members

// 4.1 static function in class can be accessed directly without using objects
// 4.2 u cant use this keyword inside static function becuse this point to object and static function is global
// 4.3 becuse static function are global we cant access non static variable in the class

class IdProvider
{
	static int ID;
public:
	static int GetId() { return ++ID; }
};

int IdProvider::ID = 0;

int main()
{
	for(int i = 0;i< 10;i++)
		cout << IdProvider::GetId() << endl; //4.1
}


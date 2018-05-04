// cpp_examples - Classes
//
// all classes features and implementation
//
// sws-54 - 2018-5-4
//
// classes are like struct but with funtions 
// in term of an object classes are types and the object is a veriabl
// other diffrent in classes from struct access specifier defaults to (private for class) and (public for struct)
// private class only 
// protected class and derived class only
// public accessed from anywear where object is visbale

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////

// 1- ways to call constructor

// 1.1 calling constructors by enclosing their arguments in parentheses is known as functional form
// Class Obj(va1,var2);  // function form

// 1.2 if the constructor has only one argument we can create an object using (=) this way called variable initialization syntax
// Class Object = 10;

// 1.3 we can call constructors using uniform initialization with uses {} not () an can include = befor {}
// Class Object = {10,30};

// chossing the way to initialize constructor is matter of style we need to understant theme if we see theme

/*
class SaySomthing 
{
public:
	SaySomthing(char const * name) { cout << name << endl; }
	SaySomthing(char const * name, char const * last) { cout << name << endl << last << endl; }
};

int main()
{
	
	SaySomthing Obj1("KOKO"); // 1.1 function form

	SaySomthing Obj2 = "NONO"; // 1.2 variable initialization

	SaySomthing obj3 = { "BOBO","SOSO" }; // 1.3 uniform initialization

	system("pause");
}

*/


///////////////////////////////////////////////////////////////

// 2- Member initialization in constructors list

// we can initalize members of class without using constructor body
// after () use : and than initialize variables
// class::constructor(int x,int y) : width(x) , hight(y) {}
// important to initalize them in order of defined variables

// why member initialization list?
// important to use initialization list everywear
// if we use the normal way initilising inside body
// (it will get initialized twich) frist we define it , it will get defult initializtion
// that inside body it will be initialized agian
// but if we use initialization list it will only get initilized once
// For members of fundamental types it makes no difference which of the ways above the constructor is defined 
// because they are not initialized by default
// but for member objects (those whose type is a class)
// if they are not initialized after the colon, they are default-constructed.
// witch result in two initializtion 
// Also you cant initialize const members without using "Member initializer list".﻿
// becuse you cant initialize const twice


// Without using member initialize list
/*
class SaySomthing
{
public:
	SaySomthing() { cout << "something" << endl; }
	SaySomthing(char const * name) { cout << name << endl; }
};

class InterFace {

private:
	SaySomthing s1;
public:
	InterFace()
	{ 
		SaySomthing s1("SWS"); 
	}

};

int main()
{
	InterFace I;
	system("pause");
	return 0;
}
*/

// using member initialize list
/*
class SaySomthing
{
	public:
		SaySomthing() { cout << "something" << endl; }
		SaySomthing(char const * name) { cout << name << endl; }
};

class InterFace {

	private:
		SaySomthing s1;
	public:
		InterFace() : s1("SWS"){}
};


int main()
{
	InterFace I;
	system("pause");
	return 0;
}
*/
// Intermediate - enum
//
// All uses of enum
//
// sws-54 - 2018-5-13

#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////////

// enum is used mostly to turn numbers into words
// enum is based on int type we can assint it to int
// I can compare and check in ifs using enum words much clearer than using numbers 1 or 0 


// 1- simple enum

// 1.1 
enum Weekdays { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

// 1.2 Jack will be 6
enum Names{Ali = 5,Jack,Jone,Jana};

// 1.5 enum is globale u need uniqe words in every enum to avoid that use class after enum
// class will stop implicit conversion from int 
enum class Color{White,Black};

enum class Skin{White,Black = 100};

ostream & operator << (ostream &o, Skin &s)
{
	return o << (int)s << endl;
}

int main()
{
	cout << Sunday << endl;
	cout << Jack << endl;

	Skin m = Skin::Black;

	cout << m << endl;

	// 1.3 implicit conversion from enum value can be set to an int variable
	int Today = Wednesday;

	//1.4 Error enum vairable does not take int value
	//Weekdays Yesterday = 1;


}
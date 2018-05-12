// Intermediate - data types 

#include <cstdint>
#include <iostream>



///////////////////////////////////////////////////////////
// 1- basic data types
/*
// int
short n1;
unsigned short n2;

int n3;
unsigned int n4;

long n5;
unsigned long n6;

long long n7;
unsigned long long n8;


// float
float f1;
double f2;
long double f3;


// other types
char c1;
bool b1;
wchar_t w1; // used for uncode charaters


// fixed size int in cstdint from 8 to 64 bit
int8_t i1;
uint8_t i2;

int64_t i3;
uint64_t i4;


// fast ints the compiler will set the type fastest 8-64
int_fast8_t fa1; // at least 8
uint_fast8_t fa2;


// at least but the compiler may make it bigger if naccery 8-64
int_least8_t l1;
uint_least8_t l2;

// fixed char
char16_t utf16;
char32_t utf32;


int main(){}
*/


///////////////////////////////////////////////////////////
// 2- enum 

// enum is used mostly to turn numbers into words
// enum is based on int type we can assint it to int
// I can compare and check in ifs using enum words much clearer than using numbers 1 or 0 

/*

enum WeekDays
{
	SUNDAY, MONDAY, TUSEDAY, WEDNESDAY // enumeric constant
};

enum EStatus
{
	EOk = 1, EWarning = 5, EError, EFatal = 99
};

// class will prevent errors from the same name normal enum global
enum class Colors{Red,Black};

enum class Skin{White,Black};

int main()
{
	// we can do it like this or use enum
	int const Sunday = 1;
	int const Monday = 2;
	int const Tuseday = 3;
	int const Wedneday = 4;

	int E = EError; // implicit conversion enum based on int

	WeekDays day;
	day = MONDAY;

	// using class enum
	Skin x = Skin::Black;

}


*/


//////////////////////////////////////////////////////////
// 3- struct
/*
// how to decler struct on heap

struct Movie
{
	int id;
	const char *name;
};

struct tinyworker	// bit structure = 36 bits rounded to 5 bytes
{
	unsigned startday : 5;
	unsigned startmonth : 4;
	unsigned startyear : 11;
	unsigned numberOfDependants : 5;
	unsigned numberOfYearsDriving : 7;
	unsigned married : 1;
	unsigned driver : 1;
	unsigned ownscar : 1;
	unsigned wearsGlasses : 1;
};

int main()
{
	// normal struct
	Movie gogo {10,"GOGO MOVIE" }; // way to declere struct with and fill variables
	std::cout << gogo.name << std::endl;


	// heap struct best practice to declear struct on heap if its big
	Movie *p = new Movie{ 10,"LOLO" }; //declear struct on heap and get a pointer
	std::cout << p->name << std::endl;
	
}
*/
////////////////////////////////////////////////////////////////////////

// 4- Union 
/*
// union share the same area of memory
// u cant use union members intangibly 
// one member can be used at once
// we can store only one value at a time

union MyUnion
{
	int x;
	int v;
};

int main()
{
	MyUnion i;
	i.x = 10;
	std::cout << i.x << std::endl;

	// x value will be repced with v value
	i.v = 5;
	std::cout << i.v << std::endl;

	std::cout << i.x << std::endl; // because x value was replaced with v value will get 5

}

*/
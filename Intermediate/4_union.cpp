// Intermediate - union
// 
// All uses of union
//
// sws-54 - 2018-5-13

// union is a special class type that can hold only one of its non-static data members at a time.
// union share the same area of memory
// u cant use union members intangibly 
// we can store only one value at a time
// the size of union = largest data member.

#include <iostream>
using namespace std;


union Iunion
{
	int x;
	const char *str;
};

int main()
{
	Iunion u;
	u.x = 10;

	cout << u.x << endl;

	u.str = "hi";

	cout << u.str << endl;
	
}
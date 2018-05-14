// Intermediate - reference
// 
// All uses of reference
//
// sws-54 - 2018-5-13


#include <iostream>
using namespace std;

// refrences are not object just aliase or onther name of the same object
// you cant point to reference cuz is not an object

//////////////////////////////////////////////////////////////////////////////

// 1- simple reference

int x = 10;
int &r = x;


//////////////////////////////////////////////////////////////////////////////

// 2- reference Parameter
// 2.1 reference parameter used to avoid copying lage types and getting access to the original type 
// 2.2 to stop the function from editing the original type use const 

// 2.1
/*
int add(int &x,int &y)
{
	cout << "func[" << &x << "]" << endl;
	return x + y;
}

// 2.2
int func(int const &x)
{
	return x * 10;
}


int main()
{
	int x = 10;
	int y = 20;
	cout << "main[" << &x << "]" << endl;

	cout << add(x, y) << endl;
	cout << func(x) << endl;
}
*/

////////////////////////////////////////////////////////////////////////////////////

// 3- return reference 

int& Sum(int n1, int n2)	// return reference via return stmt
{
	int temp = n1 + n2;
	return temp;			// NOT ALLOWED to return reference to a temp or local variable
}

int& Increment(int n1)		// return reference via return stmt
{
	return ++n1;			// NOT ALLOWED because n1 is passed by value, and is, therefore,
							// a local or temp variable
}

int& Increment(int& n1)		// return reference via return stmt
{
	return ++n1;			// OK,  n1 is a refernce, not a local variable
}

int & func(int &x)
{
	x = x * 100;
	int &p = x;
	cout << "f[" << &p << "]" << endl;
	return p;
}

int main()
{
	int x = 10;
	cout << "m[" << &func(x) << "]" << endl;
	cout << func(x) << endl;
}
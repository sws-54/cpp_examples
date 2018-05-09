// cpp_examples - templates
//
// templates
//
// sws-54 - 2018-5-6

// templates is just writting a blueprint for the compiler to write code for u
// if we have funtions with the same body but with diffrnet types 
// we can use templates to create one function to all types

#include <iostream>
#include <string>
using namespace std;

//////////////////////////////////////////////////////////////////////

// 1- Function templates

// template <class WORD> // (WORD) this will be replaced with a type we set when we call the funtion
// WORD funcname(WORD input1,WORD input2)
//{
//	return input1+input2;
//}
// to call the function 
// funcname<int>(10, 20);
// sometimes the compiler is able to deduce the type without the need for <int>

// create a funtion to do sums for types int float dubale
/*
template <class SWS_TYPE>
SWS_TYPE sums(SWS_TYPE i, SWS_TYPE x)
{
	return i + x;
}

int main()
{
	int x1    = sums<int>(10, 20);
	float x2  = sums<float>(10.3f, 40.4f);
	double x3 = sums<double>(10.54, 34.4);
	 
	cout << x1 << endl << x2 << endl << x3 << endl;

	// the compiler will deduce the type
	int x4    = sums(10, 20);
	float x5  = sums(10.3f, 40.4f);
	double x6 = sums(10.54, 34.4);

	cout << x4 << endl << x5 << endl << x6 << endl;

	system("pause");
}


*/

/////////////////////////////////////////////////////////////////

// 2- multiple template parameters

// typename and class is the same 
/*
template <typename T, typename U>
bool are_equal(T a, U b)
{
	return (a == b);
}

int main()
{
	if (are_equal(10, 10.0))
		cout << "x and y are equal\n";
	else
		cout << "x and y are not equal\n";
	system("pause");
	return 0;
}
*/

/////////////////////////////////////////////////////////

// 3- Non-type template arguments
/*
template <typename T,int N>
T SWS_mult(T i)
{
	return i * N;
}


int main()
{
	cout << SWS_mult<int,2>(10) << endl; // 2 = N

	system("pause");
}

*/


//////////////////////////////////////////////////////////////////

// 4- Class templates

// just like funtion we can create class templates 
// make a class to store two any types and get the max from the two
/*
template <class SWS_TYPE>
class MyClass
{
	SWS_TYPE x, y;
public :
	MyClass(SWS_TYPE i1,SWS_TYPE i2):x(i1),y(i2){}
	SWS_TYPE GetMax();
};

template <class SWS_TYPE>
SWS_TYPE MyClass<SWS_TYPE>::GetMax()
{
	return x > y ? x : y;
}

int main()
{
	MyClass<int> c1(10, 20);
	cout << c1.GetMax() << endl;

	MyClass<float> c2(12.5f, 12.6f);
	cout << c2.GetMax() << endl;

	MyClass<double> c3(13.5, 13.2);
	cout << c3.GetMax() << endl;

	system("pause");
}
*/

/////////////////////////////////////////////////////////////////

// 5- Template specialization

// we create the same class in case we some type we cant prosses in frist class
// the compiler will use the secned class for that type and use first class for everything else

// for example we want to create a class that adds two numbers of any numrecal types but for char write it 

/*
template <class TI>
class MyClass
{
	TI x, y;
public:
	MyClass(TI i1, TI i2) : x(i1), y(i2) {}
	TI Add();
};

template <class TI>
TI MyClass<TI>::Add()
{
	return x + y;
}

template <>
class MyClass <char>
{
	char x, y;
public:
	MyClass(char i1, char i2) : x(i1), y(i2) {}
	void Add()
	{
		cout << x << " - " << y << endl;
	}
};



int main()
{
	MyClass<int> ob1(10, 20);
	cout << ob1.Add() << endl;

	MyClass<double> ob2(10.5, 20.5);
	cout << ob2.Add() << endl;

	MyClass<char> ob3('A','B');
	ob3.Add();

	system("pause");
}

*/
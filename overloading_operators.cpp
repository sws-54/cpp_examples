// cpp_examples - Overloading operators
//
// how to do Overloading operators 
//
// sws-54 - 2018-5-5
//
// opretion overloading is creating regulare a function with an oprator not a word like add + and so on
// operatiors will behive like if we have a funtion but looks diffrent 
// these the oprationrs that can be added to class and behive like function 
// syintax : type orerator sign(){}

#include <iostream>
using namespace std;

// 1- initilizing and overloading a + operator
// after overloading the + oprator we can use it just like any funtion or with the oprator
// c = a.operator+(b);
// c = a + b;

/*
class Vector2 
{
	
public:
	int x, y;
	Vector2(int i1,int i2) : x(i1),y(i2) {}
	Vector2 operator+(const Vector2&) const;
};

Vector2 Vector2::operator+(const Vector2 &Input) const
{
	return Vector2(Input.x + x, Input.y + y);
}

int main()
{
	Vector2 v1(10, 10);
	Vector2 v2(100, 10);
	Vector2 v3(10, 10);

	Vector2 v4 = v1 + v2;

	cout << v4.x << " , " << v4.y  << endl;
	system("pause");
}

*/


/////////////////////////////////////////////////////////////////////

// 2- overloading cout to print class

/*
class Vector2
{

public:
	int x, y;
	Vector2(int i1, int i2) : x(i1), y(i2) {}
	Vector2 operator+(const Vector2&) const;
};

Vector2 Vector2::operator+(const Vector2 &Input) const
{
	return Vector2(Input.x + x, Input.y + y);
}

ostream & operator << (ostream &o, Vector2 &v)
{
	return o << v.x << " ,, " << v.y;
}

int main()
{
	Vector2 v1(10, 10);
	Vector2 v2(100, 10);
	Vector2 v3(10, 10);

	Vector2 v4 = v1 + v2;

	cout << v4 << endl;
	system("pause");
}

*/
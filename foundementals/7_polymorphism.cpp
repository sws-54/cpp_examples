// cpp_examples - Polymorphism 
//
// all uses of Polymorphism 
//
// sws-54 - 2018-5-3
//
// Polymorphism means something that can exhibit multiple forms

#include <iostream>
using namespace std;


/////////////////////////////////////////////////////////////////
// 1- Polymorphism

/*
class Chape{
protected:
	int width,hight;
public:
	void SetValues(int x,int y){width = x;hight = y;}
};

class Rectangle:public Chape
{
public:
	int Area(){return width*hight;}
};

class Triangle:public Chape
{
public:
	int Area(){return width*hight/2;}
};

int main ()
{
	Rectangle Rect;
	Triangle Tria;

	// these pointers can only access members from Chape class we use them to protect Members of class Triangle
	//you cant access (Area) from this pointer
	Chape *p1 = &Rect;
	Chape *p2 = &Tria;

	p1->SetValues(4,5);
	p2->SetValues(3,6);

	cout << Rect.Area() << endl;
	cout << Tria.Area() << endl;
	system("pause");
}

*/

/////////////////////////////////////////////////////////////////
// 2- virtual function 
//
// using virtual function will make the function inside main class low priority 
// and function from deriveted class high priority


class Chape{
protected:
	int width,hight;
public:
	void SetValues(int x,int y){width = x;hight = y;}
	virtual int Area(){return 0;}
};

class Rectangle:public Chape
{
public:
	int Area() override {return width*hight;} 
	// not important to add override but it mean we want to override virtual same function in main class
	// error if not exsist or not virtual
};

class Triangle:public Chape
{
public:
	int Area()override {return width*hight/2;}
};

int main ()
{
	Rectangle Rect;
	Triangle Tria;

	// becuase the in our main class we have area as virtual pointer 
	// from main class can access area of dervetive class  
	// if we delete virtual area will retern zero

	Chape *p1 = &Rect;
	Chape *p2 = &Tria;

	p1->SetValues(4,5);
	p2->SetValues(3,6);

	cout << p1->Area() << endl;
	cout << p2->Area() << endl;
	system("pause");
}




/////////////////////////////////////////////////////////////////
// 3- Abstract classes
//
// if a class has pure virtual funtion you cant create an instant from it
// you can use pointers from it and use polymorphic abilities
// the pure virtual funtion is just blueprint for the dervitve class 
// even inside main class will call the funtion from the dervitev class not the virtual function

/*
class Chape{
protected:
	int width,hight;
public:
	void SetValues(int x,int y){width = x;hight = y;}
	virtual int Area()=0;  // this called pure virtual funtion
};

class Rectangle:public Chape
{
public:
	int Area(){return width*hight;}
};

class Triangle:public Chape
{
public:
	int Area(){return width*hight/2;}
};

int main ()
{
	Rectangle Rect;
	Triangle Tria;

	// becuase in our main class we have area as pure virtual funtion 
	// pointer from main class can access area of dervetive class  

	Chape *p1 = &Rect;
	Chape *p2 = &Tria;

	p1->SetValues(4,5);
	p2->SetValues(3,6);

	cout << p1->Area() << endl;
	cout << p2->Area() << endl;
	system("pause");
}

*/











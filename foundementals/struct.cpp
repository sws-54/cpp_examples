// cpp_examples - struct
//
// all of struct or Data structures
//
// sws-54 - 2018-5-3
//
// struct is used to create a group of data just like database table
// struct it slef is just blueprint on what type of data , u need to create an obj and fill data inside it
// u can use that group of data by sending it function or classes or using whateve just like one variable 
// just like classes struct can have constructor and destructor and can inheret too


#include <iostream>
#include <string>

using namespace std;
// simple struct
struct Movie
{
	int id;
	string title;
	int year;
};

// print the obj we create from the struct by sending all struct is one parmeter
void PrintMovie(Movie data)
{
	cout << data.id << endl;
	cout << data.title << endl;
	cout << data.year << endl;
}

int main()
{

	// 1 - create obj and fill data

	Movie dogs;
	dogs.id = 100;
	dogs.title = "Doogs";
	dogs.year = 2020;

	//PrintMovie(dogs);
	//////////////////////////////////////////////////////////////////////////

	// 2- we can use struct defention and create obj with it or even array of objects

	struct Cars
	{
		int year;
		string color;
	}MyCar;

	MyCar.color = "blue";
	MyCar.year = 2020;

	//cout << MyCar.year << endl;
	//////////////////////////////////////////////////////////////////////////

	// 3- pointers with struct : becuse struct is type we can use pointers to point to it

	// define stcut with obj (p)
	struct Post
	{
		string title;
		int year;
	}p;


	Post *MyPost;  // create struct pointer that will point to obj with the same struct

	MyPost = &p; // givin the pointer the address of of an obj both from the same type witch is struct Post

	MyPost->title = "Hello World"; // the arrow  is used with pointer obj that has memebrs to access directly
	(*MyPost).year = 2020; // the same as using arrow oprator 
	
	//cout << MyPost->title << endl;
	//cout << MyPost->year << endl;
	//////////////////////////////////////////////////////////////////////////

	// 4- nesting struct : we can add strcut inside other struct it take extra (.) to access the other structer

	struct Person
	{
		string name;
		int age;
	};

	struct Jop
	{
		string title;
		int payment;
		Person Id;
	};

	Jop security;

	security.title = "Security";
	security.payment = 1000;
	security.Id.name = "Ali";
	security.Id.age = 44;


	system("pause");
	return 0;
}
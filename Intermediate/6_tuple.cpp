// Intermediate - tuple
// 
// All uses of tuple
//
// sws-54 - 2018-5-14

#include <iostream>
#include <tuple>

using namespace std;

// tuple is Class template std::tuple is a fixed-size collection of objects in one object
// Tuples are objects that pack elements of -possibly- different types together in a single object
// used mostly to return multiple types of diffrent data from function without using struct

//////////////////////////////////////////////////////////////

tuple<int, char>GetIntChar()
{
	return make_tuple(100, 'c');
}

int main()
{
	tuple<int, double> t(10,5.5);
	cout << get<0>(t) << endl << get<1>(t) << endl << endl;

	auto b = make_tuple(10, 20.5);
	cout << get<0>(b) << endl << get<1>(b) << endl << endl;

	auto x = GetIntChar();
	cout << get<0>(x) << endl << get<1>(x) << endl << endl;
}
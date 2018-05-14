// Intermediate - return value
// 
// All uses of return value
//
// sws-54 - 2018-5-14

#include <iostream>
#include <tuple>
using namespace std;

/////////////////////////////////////////////////

// 1- return copy
/*
// 1.1 retuern foundimantal type
int sum(int x, int y)
{
	return x + y;
}

// 1.2 return struct
struct SumAvg
{
	int sum;
	double Avg;
};

SumAvg FSumAvg(int x, int y)
{

	//SumAvg temp;
	//temp.sum = x + y;
	//temp.Avg = (x + y) / 2.0;
	//return temp;

	//return SumAvg{ x + y,(x + y) / 2.0 };
	return { x + y,(x + y) / 2.0 };
}


// 1.3 return tuple 
tuple<int, double>SumAvgTuple(int x, int y)
{
	return make_tuple(x + y, (x + y) / 2.0);
}



int main()
{
	// 1.4 use tuple 
	tuple<int, double> Result = SumAvgTuple(10, 20);
	cout << "SUM : " << get<0>(Result) << endl << "AVG : " << get<1>(Result) << endl; // get part of tuple class 0 return first parameter 1 returns secend parameter
}

*/


////////////////////////////////////////////////

// 2- return refrence
/*
int& Add10(int x)
{
	int temp = x + 10;
	return temp; // bad return becuse temp is local virable
}

//int& Add100(int x)
//{
//	return x++; // bad return becuse x is sent by value so it will be copyed and become local vairable
//}


int& Add5(int &x)
{
	x = x +5;
	return x; // Ok becuse x is sent by refrence and didn't get copyed 
}

*/
////////////////////////////////////////////////////

// 3- Trailing return 

/*
auto Sum1(int x, int y) // simply asking the compiler to deduse the type
{
	return x + y; 
}

auto Sum2(int x, int y) -> int // we can tell him it well be int
{
	return x + y;
}

auto Sum3(int x, int y)->decltype(x + y) // deduse the type from this code
{
	return x + y;
}

// 3.1 : usufull use of trailing return
template <typename T,typename U>
auto Sum4(T x, U y) // we don't know what the return type is so we have to use auto
{
	return x + y;
}


int main()
{
	int x = Sum4<int,int>(10, 20);

	double z = Sum4<double, double>(3.3, 5.2);

	char m = Sum4('a', 1);

	cout << m << endl;
}

*/
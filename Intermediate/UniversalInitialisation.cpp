// Universal Initialisation
#include <vector>
using namespace std;

struct date
{
	int dd;
	int mm;
	int ccyy;
};

class Employee
{
public:
	Employee()
		: salary(0.0), empNumber(0)
	{

	}
	Employee(double sal, int eno)
		: salary(sal), empNumber(eno)
	{

	}
private:
	double salary;
	int empNumber;
};

class UniversalEmployee
{
public:
	UniversalEmployee()
		: salary{ 0.0 }, empNumber{ 0 }
	{

	}
private:
	double salary = 0.0;
	int empNumber;
};

int main()
{
	// The next two lines show fundamental initialisation
	int a = 0;
	int b(0);

	// The next line shows universal initialisation of fundamental types
	int c{ 0 };

	// The next four lines show initialisation of arrays and structs
	int numbers1[5] = { 0,1,2,3,4 };
	int numbers2[] = { 1,2,3,4,5 };
	int numbers3[10] = { 0 };
	date millennium = { 1,1,2000 };

	// the next four lines show universal initialisation of arrays and structs
	int numbers4[5]{ 0,1,2,3,4 };
	int numbers5[]{ 1,2,3,4,5 };
	int numners6[10]{ 0 };
	date firstmillennium{ 1,1,1000 };


	// the next two lines show universal initialisation of objects of class Employee
	Employee worker3{};
	Employee worker4{ 20000.00,1234 };

	// the next line shows vector universal initialisation
	vector<int> digits2{ 999,999,999 };
}

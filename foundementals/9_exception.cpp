// cpp_examples - Exceptions 
//
// all the uses of Exceptions  
//
// sws-54 - 2018-5-6

// exceptions provide a way to react to run time errors or even non desirable result 
// by transfering the programm flow to a handeler if that exception happend
// if no exception have been thrwon the program will continue normaly and the handeler will be ignored

#include <iostream>
#include <string>
using namespace std;

// 1- simple exception 

int main()
{
	int i = 1;
	while (i != 0)
	{
		try
		{

			cout << "Enter number :";
			cin >> i;
			if (i == 5)
				throw 55;
			else if (i == 10)
				throw 'a';
			else if (i == 20)
				throw "Catched String";
			else
				throw 4.44; // throw double 
		}
		catch(int e)
		{
			cout << "Catched int " << endl;
		}
		catch (char i)
		{
			cout << "Catched char" << endl;
		}
		catch (const char *c)
		{
			cout << c << endl;
		}
		catch (...) // catch all
		{ 
			cout << "catch everything else" << endl;
		}
	}
}



/////////////////////////////////////////////////////////////

// 2- using exception from c++ Standerd library
/*

// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "My exception happened";
  }
} myex;

int main () {
  try
  {
    throw myex;
  }
  catch (exception& e)
  {
    cout << e.what() << '\n';
  }
  return 0;
}

*/
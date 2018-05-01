#include <cstdio>
#include <iostream>
#include <vector> // u need to include this to use vector

/*
// a vector is simple an array that can grow in size not fixed size
// a vector is template class in STL
//
*/

int main()
{
	// 1- declear a vector : there is 6 constractors in c11
	
	// empty constractor : vector<type>name;
	std::vector<int> first; // declear a vector

	// fill constractor : vector<type> name(size,value);
	std::vector<int> second(4,99); // 4 variables filled with number 99

	// copy constractor : vector<type> name(copyfrom);
	std::vector<int> third(second);

	// range constractor : vector<type> name(start,end)
	std::vector<int> fourth(second.begin(),second.end()); //like loop in the rage and fill the vector with the value
	
	//range constractor from loop
	int a[] = {10,22,33};
	std::vector<int> fifth(a,a + sizeof(a) / sizeof(int));

	//////////////////////////////////////////////////////////
	
	// 2- loop through vector : use auto or use std::vector(type)::itrator

	for(auto i = fifth.begin();i != fifth.end();i++)
		std::cout << *i << std::endl;

	//////////////////////////////////////////////////////////

	// 3- opration on vector 

		//3.1 : changing the vector size and update all value with 11 
		fourth.assign(5,11); 

	
		//3.2 : change value of vector in certian places
		fourth.at(0) = 14; 
		fourth[0] = 44; // the deffrent between (at) and (oprator[]) is that (at) check if it what u want out of range or not and throw out_of_range excption

		// push_back  : adds elements to the end of vector
		// pop_back : remove the last elements 
		// clear : Removes all elements from the vector with size 0 


	// refer to http://www.cplusplus.com/reference/vector/vector/ for more member function from class vector 



	return 0;
}
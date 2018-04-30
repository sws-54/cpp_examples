// cpp_examples - pinters
//
//all the uses of pointer  
//
// sws-54 - 2018-4-30

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int add(int x,int y){ return x+y;}

int main()
{

	//1- address oprator (&) : get the memory addres of a variable

	int x = 10;
	cout << &x << endl; 

	//////////////////////////////////////////////////////

	//2- derefrecing pointer oprator (*) : get the value from the memory address that the pointer store

	int *pointer1 = &x; // just with [declaration] * means we want to create pointer and store an that address in pointer 
	
	int x2 = 10;

	cout << pointer1 << endl;  // print the address that the pointer store
	printf("%d \n",*pointer1); // fetch the value from the address the pointer sotre

	*pointer1 = 100; // will store the 100 inside the value of address the pointer has mening x value will be 100 becuase pointe has x address inside her
	printf("%d \n",x);

	*pointer1 = x2; // we will change the value of the address inside the pointer x will be 10 
	printf("%d \n",x); 

	//*pointer1 = &x2; // we cant do that bacuse * means the value of the address inside an the pointer is alrady created and pointing to non pointer so we cant just store address inside non pointer
	pointer1 = &x2; // update the address inside the pointer to x2 address
	
	//////////////////////////////////////////////////////

	//3- pointer with array : pointer can only point to one place in the array at certain time

	int a[3] = {55,66,77}; // simple int array
	int *p =  a; // now pointer points only to x[0] becuse array is it self is pointer we dont need to use &a to declear the pointer

	printf("%d \n",*p);

	p++;  // now the pointer will move on to x[1]

	printf("%d \n",*p);

	(*p)++ ;// becuse the pointer now point to the address x[1] and with * we will update the value of the address inside pointer to add 1  

	printf("%d \n",a[1]);

	//////////////////////////////////////////////////////
	// 4- arithmatic with pointers

	
	int v = 10;
	int *p = &v;
	int *p2 = &v;
	int *p3 = &v;

	cout << p << endl;
	cout << "v = " << v << endl;
	p++; // this addation mean we will more the address the pointer points to the next address by 1 it does not mean addation to the variable the pointer points too
	cout << p << endl << endl;

	cout << *p2 << endl;
	*p2++; // becuse this is post increament it will not increament the value even tho we used derefrence oprator * 
	cout << *p2 << endl << endl;
	cout << "v = " << v << endl;


	cout << *p3 << endl;
	++*p3; // becuase this is pre increment it will increment the value of address inside the pointer v now 11
	cout << *p3 << endl;
	cout << "v = " << v << endl;
	
	//////////////////////////////////////////////////////
	// 5- pointer and const

	int k[2] = {77,88};
	int const *p = k; // this means we cant use this pointer to modify k[0] read only pointer 
	
	// *p = 10; error 
	// k = 500; // ok

	printf("%d \n",*p);
	p++; // we can still change the address inside the pointer to but we cant change the value to anything the pointer points to
	printf("%d \n",*p);
	
	//////////////////////////////////////////////////////
	// 6- Pointers and string literals

	const char * name = "sws"; // we can use pointer to create char array that ends with \0 , the pointer will point to [0] and will now the string ends with \0

	printf("%s \n",name); // function knows this string and gets the full value of it and the next address untill it hit \0

	name = "s\0sws";

	printf("%s \n",name);

	
	
	//////////////////////////////////////////////////////
	// 7- pointer to pointer


	int n = 44; 
	int *m = &n;
	int *z = m; // this will give us the address the m store witch is n address 
	int **g = &m; // to get the pointer m address we need **

	cout << n << endl;
	cout << *m << endl;
	cout << *z << endl;
	cout << **g << endl; // to derefrence both addresses frist m address to get the value inside m witch is n address and that the address n that was store inside m


	//////////////////////////////////////////////////////
	// 8- pointer to function 

	// PointerType=ReturnTypeFunction (*PointerName)(parameter1 type,parameter 2 type) = funcname;

	int(*po)(int,int) = add;

	printf("%d \n",po(10,20));

	system("pause");

}
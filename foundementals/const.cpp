// cpp_examples - const
//
// all the uses of const  
//
// sws-54 - 2018-5-8

// const mean u cant change [it]
// [it] depend on const posistion 


///////////////////////////////////////////////////////

// 1- const pointer 
/*
int main()
{
	int y = 10;
	int y2 = 10;

	// 1.1 We cant change variable value 

	int const x = 10;
	const int v = 10;


	// 1.2 Const with pointer : read-only pointer

	int const *p = &x;  // Read-only pointer cant be used to modifie a vairable but we can change the poiter to point to something else
	
	//*p = 50; //error
	
	p = &v;

	// 1.3 Const with pointer : real constant pointer

	int * const m = &y; // write and read pointer that u cant be changed it to point to something else and u cant use it to point to a const 
	
	*m = 50;

	//m = &y2; // error

	// 1.4 douable const pointer : pure read-only pointer 

	int const * const d = &y; // cant be used to modifiy variables and cant be changed to point to someting else
	int const * const dd = &x; 
	
	//*d = 100; // error
	// d = &y2; // error

}


*/

///////////////////////////////////////////////////////

// 2- function const
 
/*
void func(const int x) {}; // 2.1 : x cant be modified inside the function 

const int func2() { return 100; } // 2.2 : it will return const but we can store it in non-const and modifi it

void func3(const int &x){}; // 2.3 : we use this const to make sure the funtion does not modify the original value  

int main()
{
	int x = func2();
	x = 30;
}

*/

///////////////////////////////////////////////////////

// 3- class const
/*
// 3.3 we cant call non-const function inside const function 
// 3.3 const function mean it will never use anything that modify anything 

int g = 100;

class M
{	
public:
	int x;
	const int v; // 3.2 : we have to initilize it in constractor and cant be changed after that
	
	int *p = &x;

	mutable int mut; // 3.4 : mutable means even inside const objects like const funtion or const class object can be changed

	M(int i,int ii,int iii) : x(i),v(ii),mut(iii) {};

	void func() const; 

	const int * const pfunc() const;
};


void M::func() const // 3.3 : const here means this function is read only cant be used to modifiy data members of this class but can modifiy others works only on class
{
	g = 20; // ok
	mut = 100; // mutable data member
	//x = 30; // error

}

const int * const M::pfunc() const // 3.5 : this means we reterning constant pointer that cant be modifyed to point to something else and we cant change the pointer inside the function
{
	return p;
}

int main()
{
	 const M Obj(20,30,44); // 3.1 : the data member of this object cant be changed in its life time
	
	// Obj.x = 30; //error
	// Obj.v = 40; //error data member is constant 

	 Obj.mut = 300; // mutable data member 
	 Obj.func();

	 const int * z = Obj.pfunc(); // we have to make it const to match the return type
}

*/
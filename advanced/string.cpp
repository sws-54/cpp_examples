// c++ new stuff : string 
// 2018-6-1

#include <iostream>
#include <string>

using namespace std;

///////////////////////////////////////////

// 1- ways to declear string
/*
int main()
{
	string s1;
	string s2 = "";
	string s3(s2);
	string s4(10, '*');
	string s5 = "Hello ";
	string s6 = "World";
	string s7 = s5 + s6;

	cout << s7 << endl;
}
*/

/////////////////////////////////////////////

// 2- compare string
/*
int main()
{
	string s1 = "clear";
	string s2 = "clean";

	cout << s1.compare(s2) << endl; // 1 if s1 greater, 0 if equal , -1 if less than
	cout << s1.compare(s1) << endl; // 1 if s1 greater, 0 if equal , -1 if less than
	cout << s2.compare(s1) << endl; // 1 if s1 greater, 0 if equal , -1 if less than
}
*/
///////////////////////////////////////////////

// 3- search string
/*
int main()
{
	string s1 = "searching ass for ass";
	int pos = s1.find("ass"); // return first pos , -1 if didnt find anything
	int pos2 = s1.rfind("ass"); // return last post
	if (pos2 >= 0)
		cout << "found ass at postition " << pos2 << endl;
	else
		cout << "cant find ass !" << endl;
}
*/

////////////////////////////////////////////////

// 4- substring and replace

int main()
{
	string s = "ass in the loop";
	string word = "ass";
	int pos = s.find(word);

	string s1 = s.substr(pos, word.length()); //used like cut
	string s2 = s.substr(pos+word.length()); 

	s.replace(pos, word.length(), "LUL"); // replace word

	cout << s << endl;
}


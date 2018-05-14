// Intermediate - file io
// 
// All uses of file io
//
// sws-54 - 2018-5-10


#include <cstdio>
#include <string>
#include <fstream>

using namespace std;
////////////////////////////////////////////////////////////
// ofstream: Stream class to write on files
// ifstream : Stream class to read from files
// fstream : Stream class to both read and write from / to files


// 1- reading file using ifstream

/*
int main()
{
	ifstream file;
	file.open("x.txt");
	if (!file.is_open())
		printf("Error : cant open file \n\n");
	string FileString;
	while (!file.eof())
	{
		file >> FileString;
		printf("%s\n", FileString.c_str());
	}
}
*/

/////////////////////////////////////////////////////////////

// 2- Write to file using ofstream

// create new file and write to the file
/*
int main()
{
	ofstream file;
	file.open("newfile.txt");

	if (!file.is_open())
		printf("Error : cant open file\n\n");

	file << "Hello Hello !!";
	file.close();
	

}
*/

//////////////////////////////////////////////////////////////

// 3- reading binary file

int main()
{
	streampos size;
	char *Buffer = nullptr;

	ifstream file("x.txt", ios::in | ios::binary | ios::ate);

	if (!file.is_open())
		printf("ERROR : cant open file\n");

	size = file.tellg();

	Buffer = new char[size];
	file.seekg(ios::beg);
	file.read(Buffer, size);
	file.close();

	printf("%s", Buffer);
	delete[] Buffer;
}

#include <iostream>
#include <fstream>
#include <sstream>
#include "Folder1/header1.h"
#include "Folder2/header2.h"

using namespace std;

int main()
{
	H1 objFromFolder1;
	H2 objFromFolder2;
	cout << "folder 1 says "; objFromFolder1.sayHello();
	cout << "\nfolder 2 says "; objFromFolder2.sayHello();

	ifstream infile("../Hierarchy.txt");
	ostringstream contentStream;
	contentStream<<infile.rdbuf();
	infile.close();

	string contents = contentStream.str();
	int i = 0;
	string baseClass, derivedClass;
	bool relationshipParseDone = false;
	while(contents[i]!='\0')
	{
		switch(contents[i])
		{
		case '-':
		{
		   if(contents[i+1] == '>')
		   {
		      relationshipParseDone = true;
		      i++;
		   }
			break;
		}
		default:
		{
		   if(relationshipParseDone)
		   {
		      baseClass.push_back(contents[i]);
		   }
		   else
		   {
		      derivedClass.push_back(contents[i]);
		   }
		   break;
		}
		}
		i++;
	}
	cout<<baseClass<<" is parent of "<<derivedClass;
	/*
	ofstream out_file("../main.cpp");
	out_file<<contentStream.str()+"boomchika";
	out_file.close();*/

	return 0;
}

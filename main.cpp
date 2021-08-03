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

	ifstream infile("../main.cpp");
	ostringstream contentStream;
	contentStream<<infile.rdbuf();
	infile.close();

	ofstream out_file("../main.cpp");
	out_file<<contentStream.str()+"boomchika";
	out_file.close();

	return 0;
}

#include<iostream>
#include"Folder1/header1.h"
#include"Folder2/header2.h"

using namespace std;

int main()
{
	H1 objFromFolder1;
	H2 objFromFolder2;
	cout << "folder 1 says "; objFromFolder1.sayHello();
	cout << "\nfolder 2 says "; objFromFolder2.sayHello();
	return 0;
}

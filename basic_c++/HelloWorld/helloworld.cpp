#include <iostream>

using namespace std;
int main()
{
	int age;
	string name;
	cout << "Age please:";
	cin >> age;
	cout << "Name please: ";
	cin >> name;
	cout << "Named:"<< name;
	if(age > 76){
        cout << "Old bastard:" << age;
	}
	else {
        cout << "Young bastard:" << age;
	}




//    int::cout << characterAge;
    return 0;
}

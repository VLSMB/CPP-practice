#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void)
{
	fstream f1;
	f1.open("user.txt", ios::out);
	cout << "user:";
	string str;
	cin >> str;
	f1 << "user:" << str << endl;
	cout << "password:";
	cin >> str;
	f1 << "password:" << str << endl;
	f1.close();
	return 0;
}
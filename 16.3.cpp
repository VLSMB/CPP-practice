#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	ofstream f1("user2.txt");
	string str;
	for (int i = 0; i < 5; i++) {
		cout << "user:";
		cin >> str;
		f1 << "user:" << str << endl;
		cout << "password:";
		cin >> str;
		f1 << "pass:" << str << endl;
	}
	
	
	return 0;
}
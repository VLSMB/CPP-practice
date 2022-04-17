#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	char c;
	ifstream f1("user.txt");
	while (!f1.eof())
	{
		f1.get(c);
		cout << c;
	};
	f1.close();
	return 0;
}
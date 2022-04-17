#include <iostream>
#include <strstream>
#include <string>
using namespace std;

int str_to_int(string x);
int main(void)
{
	string a,c;
	int b;
	cin >> a;
	cin >> c;
	b = str_to_int(a)+str_to_int(c);
	cout << "a+c=" << b << endl;
	return 0;
}
int str_to_int(string x)
{
	istrstream s1(x.c_str());
	int b;
	s1 >> b;
	return b;
}

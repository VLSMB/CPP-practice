#include <iostream>
using namespace std;

int main(void)
{
	char name[40];
	while (1)
	{
		cout << "ÊäÈë£º";
		cin >> name;
		if (name[0]=='e'&&name[1]=='x'&&name[2]=='i'&&name[3]=='t')
			break;
		cout << "Êä³ö£º" << name << endl;
	}
	return 0;
}
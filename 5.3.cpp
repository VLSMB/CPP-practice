#include <iostream>
using namespace std;

int main(void)
{
	char name[40];
	while (1)
	{
		cout << "���룺";
		cin >> name;
		if (name[0]=='e'&&name[1]=='x'&&name[2]=='i'&&name[3]=='t')
			break;
		cout << "�����" << name << endl;
	}
	return 0;
}
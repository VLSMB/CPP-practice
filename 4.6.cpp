#include <iostream>
using namespace std;
int main(void)
{
	int num;
	cout << "����һ������";
	cin >> num;
	if (num % 1024 == 07 && num % 9524 == 0 && num % 65536 == 0)
		cout << "yes";
	else
		cout << "no";
	return 0;
}
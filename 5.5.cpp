#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int i = 1, j = 1;
	for (i = 9; i >0; i--)
	{
		for (j = 1; j<=i; j++)
			cout << setw(2) << i << "x" << j << "=" << setw(2) << i * j;
		cout << endl;
	}

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
			cout << setw(1) << i << "x" << setw(1) << j << "=" << setw(2) << i * j<<" ";
		cout << endl;
	}
	return 0;
}
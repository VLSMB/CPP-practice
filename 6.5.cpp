#include <iostream>
using namespace std;
int Fico(int n = 1);

int main(void)
{
	int n;
	for (n = 1; n < 20; n++)
		cout << Fico(n)<<" ";
	return 0;
}

int Fico(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return Fico(n - 1) + Fico(n - 2);
}
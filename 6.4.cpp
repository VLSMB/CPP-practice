#include <iostream>
using namespace std;
long Fac(const unsigned n=0);

int main(void)
{
	cout << Fac(1);
	return 0;
}

long Fac(const unsigned n)
{
	if (n == 0 || n == 1)
		return 1L;
	return long(n) * Fac(n - 1);
}
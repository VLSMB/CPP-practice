#include <iostream>
using namespace std;
int pow(int m, int n);

int main(void)
{

	return 0;
}

int pow(int m, int n)
{
	int result = 1;
	while (n--)
		result *= m;
	return result;
}
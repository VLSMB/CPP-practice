#include <iostream>
using namespace std;

int main(void)
{
	int x = 3, y = 3, z = 1;
	printf("%d %d %d\n",(++x,y++),z+x+y+2);
	double a = 1;
	printf("%f\n",float(a));
	return 0;
}
#include <iostream>
#include <stdarg.h>
using namespace std;
float average(int num, ...);

int main(void)
{
    cout << average(1,2,3,4,5,69);
	return 0;
}
float average(int num, ...) {
	va_list ag;
	va_start(ag, num);
	int count = num;
	int sum=0;
	int temp;
	while (num--)
	{
		temp = va_arg(ag, int);
		sum += temp;
	}
	return sum / count;
}

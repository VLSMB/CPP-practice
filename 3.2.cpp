#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	cout << hex << (0xFFFF1234 & 0xFFFF0000);
	cout << dec << endl << (459137 ^ 79);
	cout << endl << (1024 >> 3) << endl;
	cout << (((1024 >> 3) << 3) - 1024);
	return 0;
}
#include <iostream>
using namespace std;
int stringlen(const char* p)
{
	int x = 0;
	for (x=0; p[x] != '\0'; x++);
	return x;
}

int main(void)
{
	char ccArray[5][5] = {
		{'a','b','c','d','e'},
		{'b','a','8','d','d'},
		{'c','d','a','e','c'},
		{'d','j','f','a','b'},
		{'e','d','a','f','a'} };
	for (int i = 0; i < 5; i++)
		cout << ccArray[i][i];

	cout << endl  << stringlen("Hello ");
	return 0;
}
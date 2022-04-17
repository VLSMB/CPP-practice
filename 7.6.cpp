#include <iostream>
using namespace std;

int main(void)
{
	int i = 1;
	float j = 1.0;
	char k = 'a';
	cout << "int i的地址" << &i << endl;
	cout << "float j的地址" << &j << endl;
	cout << "char k的地址" << hex<<&k << endl;

	int a = 100;
	int* p = &a;
	cout << dec << "a=" << a << "  *p=" << *p << endl;

	char ID[] = "220103190001014615";
	char* q = ID;
	for (int x = 0; x < 8; x++)
	{
		printf("%c",*(q+6+x));
	}
	return 0;
}
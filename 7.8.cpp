#include <iostream>
using namespace std;
void PritByType(void* p, int type);
int main(void)
{
	int a = 0x12345678;
	void* p = &a;
	cout << hex << (int)(*((char*)p + 3)) << endl;
	cout << hex << (int)(*((char*)p + 2)) << endl;
	cout << hex << (int)(*((char*)p + 1)) << endl;
	cout << hex << (int)(*((char*)p + 0)) << endl;

	int a1 = 10;
	char b = 'a';
	float c = 12.56f;
	PritByType(&a1,0);
	PritByType(&b, 1);
	PritByType(&c, 2);
	return 0;
}

void PritByType(void* p, int type) {
	switch (type)
	{
	case 0:
		cout << *(int*)p << endl;
		break;
	case 1:
		cout << *(char*)p << endl;
		break;
	case 2:
		cout << *(float*)p << endl;
		break;
	default:
		cout << "NULL" << endl;

	}
}
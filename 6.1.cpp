#include <iostream>
using namespace std;
void light(bool a=true);
void strin(const char *p= "233��");

int main(void)
{
	strin("VLSMB");
	return 0;
}

void light(bool a)
{
	if (a)
		cout << "����";
	else
		cout << "�ص�";
	cout << endl;
}

void strin(const char* p)
{
	cout << p << endl;
}

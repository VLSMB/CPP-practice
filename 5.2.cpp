#include <iostream>
using namespace std;

int main(void)
{
	int height, sum,index;
	for (height = 80, index = 0,sum=0; index < 6; index++)
	{
		sum += height;
		height /= 2;
	}
	cout << "����" << sum << "�ף����һ��" << height << "��\n";
	return 0;
}
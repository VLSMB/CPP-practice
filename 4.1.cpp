#include <iostream>
using namespace std;
int main(void)
{
	cout << "������һ�����֣�";
	int input;
	cin >> input;
	if ((input % 3 == 0) && (input % 5 == 0) && (input % 7 == 0))
	{
		cout<<"������ֿ���ͬʱ��3 5 7������";
	}
	else
	{
		cout << "������ֲ����Ա�3 5 7ͬʱ������";
	}
}
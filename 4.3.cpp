#include <iostream>
using namespace std;
int main(void)
{
	int money;
	cout << "������ѡ���أ�";
	cin >> money;
	switch (money)
	{
		case 1:
			cout << "������";
			break;
		case 2:
			cout << "������";
			break;
		case 3:
			cout << "������";
			break;
		case 4:
			cout << "�ʵ���";
			break;
		default:
			cout << "�������";
	}

	int led;
	cout << "�������֣�";
	cin >> led;
	switch (led)
	{
	case 1:
		cout << "��";
		cout << "��ͣ";
		break;
	case 2:
		cout << "�̵���";
		break;
	case 3:
		cout << "��һ��";
		break;
	default:
		cout << "��Ч���룡";
	}
}
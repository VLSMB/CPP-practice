#include <iostream>
using namespace std;

int main(void)
{
	/*int password;
	do {
		cout << "�������룺";
		cin >> password;
	} while (password != 12345);
	cout << "������ȷ��";*/

	int money=0,input;
	do {
		cout << "����1Ͷ�ң�";
		cin >> input;
		(input == 1) ? money++ : money;
		switch (money)
		{
		case 3:
			cout << "����ѡ��3Ԫ�����ϡ�" << endl;
			break;
		case 5:
			cout << "����ѡ��5Ԫ�����ϡ�" << endl;
			break;
		case 7:
			cout << "����ѡ��7Ԫ�����ϡ�" << endl;
			break;
		default:
			cout << "��������"<<endl;
		}
	} while (1);
	return 0;
}
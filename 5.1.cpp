#include <iostream>
using namespace std;

int main(void)
{
	/*int password;
	do {
		cout << "输入密码：";
		cin >> password;
	} while (password != 12345);
	cout << "密码正确！";*/

	int money=0,input;
	do {
		cout << "输入1投币：";
		cin >> input;
		(input == 1) ? money++ : money;
		switch (money)
		{
		case 3:
			cout << "可以选择3元的饮料。" << endl;
			break;
		case 5:
			cout << "可以选择5元的饮料。" << endl;
			break;
		case 7:
			cout << "可以选择7元的饮料。" << endl;
			break;
		default:
			cout << "买不了饮料"<<endl;
		}
	} while (1);
	return 0;
}
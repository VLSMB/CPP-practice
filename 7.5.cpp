#include <iostream>
using namespace std;

int man(void)
{
	char word[40];
	while (true)
	{
		cout << "���뵥�ʣ�";
		cin >> word;
		if (!strcmp(word, "exit")) {
			cout << "�����bye" << endl;
			break;
		}
		cout << "�����" << word << endl;
	}
	return 0;
}

int mai(void)
{
	char password[40];
	do {
		cout << "��������ȷ�����룺";
		cin >> password;
	} while (strcmp(password, "574824"));
	return 0;
}

int main(void)
{
	int i = 100;
	int* p = &i;
	cout << p;
	return 0;
}
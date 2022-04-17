#include <iostream>
using namespace std;

int man(void)
{
	char word[40];
	while (true)
	{
		cout << "输入单词：";
		cin >> word;
		if (!strcmp(word, "exit")) {
			cout << "输出：bye" << endl;
			break;
		}
		cout << "输出：" << word << endl;
	}
	return 0;
}

int mai(void)
{
	char password[40];
	do {
		cout << "请输入正确的密码：";
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
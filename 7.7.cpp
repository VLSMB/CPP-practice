#include <iostream>
using namespace std;

int man(void)
{
	int x = 0;
	int num = 1;
	char words[] = "I have a dream.";
	char* p = &words[0];
	for (x = 0; x < strlen(words); x++)
	{
		if (*(p + x) == ' ')
			num++;
	}
	cout << words << " 共有" << num << "个单词。";
	return 0;
}

int main(void)
{
	int a[6] = { 1,0,0,1,0,0 };
	int* p = &a[5];
	int num = 6;
	for (num = 6; num > 0; num--,p--)
	{
		if (*p == 1)
			cout << num << "号灯亮";
	}
	return 0;
}
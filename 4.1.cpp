#include <iostream>
using namespace std;
int main(void)
{
	cout << "请输入一个数字：";
	int input;
	cin >> input;
	if ((input % 3 == 0) && (input % 5 == 0) && (input % 7 == 0))
	{
		cout<<"这个数字可以同时被3 5 7整除！";
	}
	else
	{
		cout << "这个数字不可以被3 5 7同时整除！";
	}
}
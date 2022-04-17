#include <iostream>
using namespace std;

int main(void)
{
	int score[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int total = 20;
	int sum = 0;
	int input;
	while (total--)
	{
		cout << "输入成绩：";
		cin >> input;
		if (input == -1)
			break;
		score[total] = input;
	}
	for (int index = 0; index < 20; index++)
		sum += score[index];
	cout << "平均成绩为："<<double(sum)/20.0;

	return 0;
}
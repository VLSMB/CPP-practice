#include <iostream>
using namespace std;
int rabbit(int day = 1);
int calc(int step) {
	if (step == 1) {
		return 1;        // 台阶有一阶，只有一种走法
	}
	if (step == 2) {
		return 2;        // 台阶有两阶，有两种走法，1:一次一阶; 2:一次两阶
	}

	// 台阶多于2阶，走法 = 第一步迈1阶的走法+第一步逐2阶的走法
	// 也可以说是：   走法 = 剩余的99阶的走法+剩余的98阶的走法。
	return calc(step - 1) + calc(step - 2);
}

int main(void)
{
	int result;
	result = rabbit(12);
	cout << "共有" << result << "只兔子。";
	return 0;
}

int rabbit(int day) 
{
	if (day == 1 || day == 2)
		return 2;
	else
		return rabbit(day-2)+rabbit(day-1);
}
#include <iostream>
using namespace std;
int main(void)
{
	int mile;
	cout << "输入公里数：";
	cin >> mile;
	cout << "一共花费";
	(mile <= 3) ? cout << 6 : cout << 2 * (mile - 3) + 6;
	cout << "元";

	int day;
	cout << "\n输入天数：";
	cin >> day;
	cout << "一共赚取：";
	(day <= 30) ? cout << day : cout << day * 0.75;
	cout << "元\n";

	int num;
	cout << "输入一个数字";
	cin >> num;
	(num % 2 == 0) ?
		((num % 9527 == 0) ? cout << "yes" : cout << "no")
		: cout << "no";

	int time;
	cout << endl;
	cout << "输入时间：";
	cin >> time;
	(time < 20) ? ((time == 12) ? cout << "Noon good" : cout << "Good day" ): cout << "Good evening";
	return 0;
}
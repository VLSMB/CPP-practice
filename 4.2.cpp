#include <iostream>
using namespace std;
int main(void)
{
	int mile;
	cout << "���빫������";
	cin >> mile;
	cout << "һ������";
	(mile <= 3) ? cout << 6 : cout << 2 * (mile - 3) + 6;
	cout << "Ԫ";

	int day;
	cout << "\n����������";
	cin >> day;
	cout << "һ��׬ȡ��";
	(day <= 30) ? cout << day : cout << day * 0.75;
	cout << "Ԫ\n";

	int num;
	cout << "����һ������";
	cin >> num;
	(num % 2 == 0) ?
		((num % 9527 == 0) ? cout << "yes" : cout << "no")
		: cout << "no";

	int time;
	cout << endl;
	cout << "����ʱ�䣺";
	cin >> time;
	(time < 20) ? ((time == 12) ? cout << "Noon good" : cout << "Good day" ): cout << "Good evening";
	return 0;
}
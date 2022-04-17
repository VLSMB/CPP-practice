#include <iostream>
using namespace std;
int main(void)
{
	int money;
	cout << "ÊäÈëËùÑ¡¿ª¹Ø£º";
	cin >> money;
	switch (money)
	{
		case 1:
			cout << "µÆÅÝÁÁ";
			break;
		case 2:
			cout << "µÆÅÝÁÁ";
			break;
		case 3:
			cout << "µÆÅÝÁÁ";
			break;
		case 4:
			cout << "²ÊµÆÁÁ";
			break;
		default:
			cout << "ÊäÈë´íÎó£¡";
	}

	int led;
	cout << "ÊäÈëÊý×Ö£º";
	cin >> led;
	switch (led)
	{
	case 1:
		cout << "ºì";
		cout << "µÆÍ£";
		break;
	case 2:
		cout << "ÂÌµÆÐÐ";
		break;
	case 3:
		cout << "µÈÒ»µÈ";
		break;
	default:
		cout << "ÎÞÐ§ÊäÈë£¡";
	}
}
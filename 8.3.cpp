#include <iostream>
using namespace std;
union My {
	int age;
	char* name;
	float score;
};
enum Season{spring,sumer,fall,winter};

int main(void)
{
	/*My v;
	v.age = 6;
	v.name = (char*)"VLSMB";
	cout << v.age << v.name<<endl;
	Season a;
	a = spring;
	cout << a;*/
	Season a = fall;
	switch (a) {
	case 0:
		cout << "现在是春天";
		break;
	case 1:
		cout << "现在是夏天";
		break;
	case 2:
		cout << "现在是秋天";
		break;
	case 3:
		cout << "现在是冬天";
		break;
	default:
		break;
	};
	return 0;
}
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
		cout << "�����Ǵ���";
		break;
	case 1:
		cout << "����������";
		break;
	case 2:
		cout << "����������";
		break;
	case 3:
		cout << "�����Ƕ���";
		break;
	default:
		break;
	};
	return 0;
}
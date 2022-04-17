#include <iostream>
using namespace std;

int main(void) {

	int arry[3][3] = { {8,75,23},{21,55,34},{15,23,20} };
	int (* p)[3]=arry; // 数组指针，指向一个含有3元素的整型数组地址
	int temp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << *(*(p + i) + j)<<" ";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < i; j++) {
			temp = *(*(p + i) + j);
			*(*(p + i) + j) = *(*(p + j) + i);
			*(*(p + j) + i) = temp;
		}
	}

	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << *(*(p + i) + j) << " ";
		}
		cout << endl;
	}
	getchar();
	return 0;
}

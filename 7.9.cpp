#include <iostream>
using namespace std;

int man(void)
{
	char words[] = "Life is brief,and then you die,you know?";
	char* p = words;
	int set = 0;
	for (set = 0; *(p + set) != ','; set++);
	cout << "第一个逗号在" << set << "处" << endl;
	int a[10] = { 0,0,0,0,0,5,0,0,0,0 };
	int* q = a;
	cout << a[5] << "与" << *(q + 5) << endl;
	return 0;
}

int main(void)
{
	int array[3][3] = { {8,75,23},{21,55,34},{15,23,20} };

	cout << "交换前:" << endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	
	int(*p)[3] = array;
	for (int row = 0; row < 3; ++row) {
		for (int col = 0; col < row; ++col) {
			int tmp = *(*(p + row) + col);
			*(*(p + row) + col) = *(*(p + col) + row);
			*(*(p + col) + row) = tmp;
		}
	}
	/*for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < row; col++)
		{
			int temp = array[row][col];
			array[row][col] = array[col][row];
			array[col][row] = temp;
		}
	}*/
	cout << "交换后:" << endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
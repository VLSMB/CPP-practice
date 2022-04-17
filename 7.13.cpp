#include <iostream>
using namespace std;
void AddAge(int& age);
void sort(int& a, int& b, int& c);

int main(void)
{
	int a = 3, b = 9, c = 1;
	sort(a, b, c);
	cout << a << b << c;
	return 0;
}

void AddAge(int& age) {
	age++;
}
void sort(int& a, int& b, int& c) {
	int temp;
	while (!(a <= b && b <= c)) {
		if (a > b) {
			temp = a; a = b; b = temp;
		}
		if (a > c) {
			temp = a; a = c; c = temp;
		}
		if (b > c) {
			temp = b; b = c; c = temp;
		}
	}
}
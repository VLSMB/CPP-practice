#include <iostream>

void to_up(char*letter);

using namespace std;

int main(void)
{
	char array[][64] = {
  "春眠不觉晓，",
  "处处闻啼鸟。",
  "夜来风雨声，",
  "花落知多少。"
	};
	char(*p)[64] = array;
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 64; col++)
			cout << *(*(p+row)+col);
		cout << endl;
	}

	cout << "输入一个字母：";
	char letter;
	cin >> letter;
	to_up(&letter);
	cout << letter << endl;
	return 0;
}

void to_up(char* letter)
{
	if (*letter >= 'a' && *letter <= 'z')
		*letter -= 32;
}
#include <iostream>
using namespace std;

int main(void)
{
	char str1[10], str2[10]="SMB";
	strcpy(str1, "VL");
	strcat(str1, str2);
	cout << str1 << endl;
	strcpy(str1, str2);
	cout << str1 << endl;

	char sect[] = "Where there is a will,there is a way.\n";
	cout << sect;
	strcpy(sect, "有志者事竟成。\n");
	cout << sect;
	return 0;
}
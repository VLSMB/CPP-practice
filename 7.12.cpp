#include <iostream>
using namespace std;
char* FindStr(const char* FindIn, const char* ToFind);

int main(void)
{
	char* p;
	p = FindStr("只有知道如何停止的人","停止");
	cout << p;
	return 0;
}

char* FindStr(const char* FindIn, const char* ToFind) {
	char* p = (char*)FindIn;
	while (*p != *ToFind)
		p++;
	return p;
}
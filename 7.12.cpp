#include <iostream>
using namespace std;
char* FindStr(const char* FindIn, const char* ToFind);

int main(void)
{
	char* p;
	p = FindStr("ֻ��֪�����ֹͣ����","ֹͣ");
	cout << p;
	return 0;
}

char* FindStr(const char* FindIn, const char* ToFind) {
	char* p = (char*)FindIn;
	while (*p != *ToFind)
		p++;
	return p;
}
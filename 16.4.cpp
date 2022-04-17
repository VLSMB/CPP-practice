#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	fstream f1("user.txt", ios::in | ios::binary);
	cout << f1.rdstate() << endl;
	while (!f1.eof())
	{
		char buf = '\0';
		f1.read(&buf, 1);
		//if (f1.tellg() > 0)
			printf("%02X -- %c ",buf,buf);
	};
	f1.close();
	
	return 0;
}
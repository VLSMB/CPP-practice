#include <iostream>
using namespace std;
void click(void);
int main(void)
{
	click();
	click();
	click();
	return 0;
}

void click(void)
{
	static int sum=0;
	sum++;
	cout << "µã»÷ÁË" << sum << "´Î" << endl;
}
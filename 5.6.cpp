#include <iostream>
using namespace std;

int main(void)
{
	int x, y, z;
	for (x = 0; x<=20; x++)
	{
		for (y = 0; y<=33; y++)
		{
			for (z = 0; z<=300; z++)
			{
				if ((x + y + z == 100) && (15 * x + 9 * y + z == 300))
					cout << "������" << x << "ֻ������" << y << "ֻĸ����" << z << "ֻС��" << endl;
			}
		}
	}
	return 0;
}
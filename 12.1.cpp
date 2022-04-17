#include <iostream>
using namespace std;
template <class type ,int length>
type sum(type array[length]) {
	type result = (type)0;
	for (int i = 0; i < length; i++)
		result += array[i];
	return result;
}
template <class type,int len>
void IsZero(type num[len]) {
	for (int i = 0; i < len; i++)
	{
		if (num[i] > 0)
			cout << num[i] << " ";
	}
	cout << endl;
}

int main(void)
{
	char name[50] = "VLSMB",sex[20]="ÄÐ";
	int a[10] = {1,-2,3,-4,5,-6,-7,8,9,0};
	float b[5] = {1.5f,-2.6f,3.7f,-4.8f,-5.9f};
	cout << sum<float,10>(b)<<endl;

	IsZero<int, 10>(a);
	IsZero<float, 5>(b);
	return 0;
}
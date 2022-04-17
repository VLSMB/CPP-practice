#include <iostream>
using namespace std;
template<class type>
type max_2(type a, type b)
{
	if (a > b)
		return a;
	else
		return b;
}
const char* max_2(const char* a, const char* b)
{
	if (strcmp(a, b) > 0)
		return b;
	else
		return a;
}

template<class T1,class T2=int>
class Test {
public:
	T1 t1;
	T2 t2;
	Test(T1 a1, T2 a2);
};
template<class T1, class T2>
Test<T1,T2>::Test(T1 a1, T2 a2) {
	t1 = a1; t2 = a2;
}
int main(void)
{
	cout << max_2("fewfew","fewfgr") << endl;
	Test<int, float> a(1, 2.0f);
	return 0;
}
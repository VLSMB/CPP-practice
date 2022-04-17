#include <iostream>
#include "user.h"
using namespace std;

void Admin::changepass(User2&user,string s) {
	user.setpass(s);
};

int main(void)
{
	Teacher t;
	HeadTeacher h;
	h.out();
	cout << endl;

	return 0;
}
#include <iostream>
#include "user.h"
using namespace std;

int main(void)
{
	User user;
	user.setname("VLSMB");
	user.setpass("123456");
	cout << "ÓÃ»§Ãû£º" << user.getname() << " ÃÜÂë£º" << user.getpass() << endl;
	
	CStudent stu("VLSMB", 18, "KEY");
	cout << stu.name << stu.age << stu.classname << endl;

	Book b1("C++");
	Book b2(b1);
	cout << b2.name << endl;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

struct Teacher {
	int age;
	int workyear;
	string name;
};
struct Student {
	int age;
	int studyage;
	string name;
};
struct ClassRoom {
	Teacher t[10];
	Student s[60];
};

int main(void)
{
	Teacher* p = new Teacher;
	p->age = 80;
	p->name = "VLSMB";
	p->workyear = 40;
	cout << "一名叫" << p->name << "的老师，年龄" << p->age << "，教龄" << p->workyear;
	delete p;
	ClassRoom V;
	for (int i = 0; i < 60; i++) {
		V.s[i].age = 18 + i;
		V.s[i].studyage = i;
		V.s[i].name = "esdsfrg";
	}
	for (int i = 0; i < 60; i++) {
		cout << V.s[i].name << " " << V.s[i].age << " " << V.s[i].studyage << endl;
	}
	
	return 0;
}
#include <iostream>
#include <string>
using namespace std;
struct Student {
	int age[5];
	string name[5];
	float score[5];
};
void print(Student* s) {
	for (int i=0;i<5;i++)
		cout << s->score[i]<<" ";
};

int main(void)
{
	Student*s=new Student;
	for (int i = 0; i < 5; i++)
		s->score[i] = float(i) + 2.1f;
	print(s);
	delete s;
	return 0;
}
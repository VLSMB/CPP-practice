#include <iostream>
#include "Inher.h"
using namespace std;

int main(void)
{
	Student stu;
	stu.setname("VLSMB");
	stu.sethw(12.5f,256.2f);
	stu.out();

	SubTrain* sub = new SubTrain;
	delete sub;

	Bird b(12,56.2f);
	b.out();

	TrainC v(12), l(10);
	bool d = v > l;
	cout << d << endl;

	CInteger x(25.6f);
	cout << TrainC(x).count << endl;

	Mankind* mk = new AStudent;
	mk->SayHello();
	Mankind m;
	mk = &m;
	mk->SayHello();
	return 0;
}
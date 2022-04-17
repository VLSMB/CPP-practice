#pragma once
#include <string>
#include <iostream>
using namespace std;

class Human {
protected:
	string name;
	float height;
	float weight;
};
class Student : private Human {
public:
	void setname(string s_name) {
		this->name = s_name;
	};
	void sethw(float s_height, float s_weight) { 
		height = s_height;
		weight = s_weight;
	};
	void out() {
		cout<<"A student called "<<name<<", his weight is "<<weight<<" and his height is "<<height<<".\n";
	}
};

class Train {
public:
	Train() { cout << "Train类构造" << endl; };
	~Train() { cout << "Train类析构" << endl; };
};
class SubTrain :public Train {
public:
	SubTrain() { cout << "SubTrain类构造" << endl; };
	~SubTrain() { cout << "SubTrain类析构" << endl; };
};

class Animal {
public:
	int size;
	float speed;
	Animal(int sz, float sd) {
		size = sz;
		speed = sd;
	};
};
class Bird :public Animal {
public:
	Bird(int sz, float sd) :Animal(sz, sd) {};
	void out() { cout << size << " " << speed << endl; };
};

class TrainC {
public:
	int count;
	bool operator>(TrainC&a);
	TrainC(int num) : count(num) {};
};
bool TrainC::operator>(TrainC& a) {
	if (this->count > a.count)
		return true;
	else
		return false;
}

class CInteger {
public:
	float num;
	CInteger(float a) : num(a){};
	operator TrainC() const {
		return num;
	};
};

class Man {
public:
	Man() { cout << "Man" << endl; };
};
class Teach {
public:
	Teach() { cout << "Teacher" << endl; };
};
class ManTeacher :public Man, public Teach {
public:
	ManTeacher() { cout << "ManTeacher" << endl; };
};

class Mankind {
public:
	virtual void SayHello() {
		cout << "我是人类" << endl;
	}
};
class AStudent :public Mankind {
public:
	void SayHello() {
		cout << "我是学生" << endl;
	}
};
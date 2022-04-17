#pragma once
#include <string>
#include <iostream>
using namespace std;

class User {
private:
	string username;
	string password;
public:
	void setname(string name);
	void setpass(string pass);
	string getname();
	string getpass();
};
void User::setname(string name) { this->username = name; }
void User::setpass(string pass) { this->password = pass; }
string User::getname() { return this->username; }
string User::getpass() { return this->password; }

class CStudent {
public:
	string name;
	int age;
	string classname;
	CStudent();
	CStudent(string name, int age, string classname);
};
CStudent::CStudent() { 
	name = "";
	age = 0;
	classname = "";
}
CStudent::CStudent(string name, int age, string classname){
	this->name = name;
	this->age = age;
	this->classname = classname;
}

class Book {
public:
	string name;
	Book();
	Book(string name);
	Book(Book& newbook);
};
Book::Book() { name = ""; }
Book::Book(string name) { this->name = name; }
Book::Book(Book& newbook) { name = newbook.name; }

class HeadTeacher {
public:
	void out();
};

class Teacher {
private:
	float wage;
	void output();
public:
	Teacher();
	friend void HeadTeacher::out();
};
Teacher::Teacher() { wage = 250.0f; }
Teacher t;
void HeadTeacher::out() { cout << t.wage; }

class User2 {
private:
	string username;
	string password;
	void setpass(string pass);
public:
	void setname(string name);
	string getname();
	string getpass();
	friend class Admin;
};
void User2::setname(string name) { this->username = name; }
void User2::setpass(string pass) { this->password = pass; }
string User2::getname() { return this->username; }
string User2::getpass() { return this->password; }

class Admin {
	void changepass(User2&user,string s);
};
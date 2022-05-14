#pragma once
#include <iostream>
#include <stdio.h>
#include<cmath>
using namespace std;
class complex;
void operator<<(ostream& cout, complex& a);

class complex {
	// 复数类，real为实部，img为虚部
private:
	float real;
	float img;
public:
	friend void operator<<(ostream& cout, complex& a);
	float get_real()const { return real; };
	float get_img()const { return img; };
	void set_real(float r) { real = r; };
	void set_img(float i) { img = i; };
	complex();
	complex(float r, float i);
	complex operator+(complex& a);
	complex operator-(complex& a);
	complex operator*(complex& a);
	complex operator/(complex& a);
	complex operator+=(complex& a);
	complex operator-=(complex& a);
	complex operator*=(complex& a);
	complex operator/=(complex& a);
	bool operator==(complex& a);
	bool operator!=(complex& a);
};
complex::complex() :real(0.0f) , img(0.0f) {};
complex::complex(float r, float i) :real(r), img(i) {};

void operator<<(ostream& cout, complex& a) {
	if (a.real != 0.f)
	{
		if (a.img > 0.f)
		{
			if (a.img != 1.f)
				cout << a.real << " + " << a.img << "i";
			else
				cout << a.real << " + i";
		}
		else if (a.img == 0.f)
			cout << a.real;
		else if (a.img < 0.f)
		{
			float a_img = fabs(a.img);
			if (a_img == 1.f)
				cout << a.real << " - i";
			else
				cout << a.real << " - " << a_img << "i";
		}
	}
	else 
	{
		if (a.img == 1.f)
			cout << "i";
		else if (a.img == -1.f)
			cout << "-i";
		else if (a.img == 0.f)
			cout << "0";
		else
			cout << a.img << "i";
	};
};

complex complex::operator+(complex& a) {
	complex c;
	c.set_real(this->real + a.get_real());
	c.set_img(this->img + a.get_img());
	return c;
};
complex complex::operator-(complex& a) {
	complex c;
	c.set_real(this->real - a.get_real());
	c.set_img(this->img - a.get_img());
	return c;
};
complex complex::operator*(complex& a) {
	complex c;
	c.real = this->real * a.real - this->img * a.img;
	c.img = this->img * a.real + this->real * a.img;
	return c;
}
complex complex::operator/(complex& a)
{
	complex c;
	c.real = (this->real * a.real + this->img * a.img) / (pow(a.real, 2) + pow(a.img, 2));
	c.img = (this->img * a.real - this->real * a.img) / (pow(a.real, 2) + pow(a.img, 2));
	return c;
};
bool complex::operator==(complex& a) { return (this->real == a.real && this->img == a.img); }; 
bool complex::operator!=(complex& a) { return (this->real != a.real || this->img != a.img); };

complex complex::operator+=(complex& a) {
	this->set_real(this->real + a.get_real());
	this->set_img(this->img + a.get_img());
	return *this;
};
complex complex::operator-=(complex& a) {
	this->set_real(this->real - a.get_real());
	this->set_img(this->img - a.get_img());
	return *this;
};
complex complex::operator*=(complex& a) {
	this->real = this->real * a.real - this->img * a.img;
	this->img = this->img * a.real + this->real * a.img;
	return *this;
}
complex complex::operator/=(complex& a)
{
	this->real = (this->real * a.real + this->img * a.img) / (pow(a.real, 2) + pow(a.img, 2));
	this->img = (this->img * a.real - this->real * a.img) / (pow(a.real, 2) + pow(a.img, 2));
	return *this;
};

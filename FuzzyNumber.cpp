#include <stdexcept>
#include "FuzzyNumber.h"
#include <iostream>
using namespace std;


FuzzyNumber::FuzzyNumber() {
	x = 0;
	x1 = 0;
	x2 = 0;
}
FuzzyNumber::FuzzyNumber(double x) {
	this->x = x;
	this->x1 = 0;
	this->x2 = 0;
}
FuzzyNumber::FuzzyNumber(double x, double x1) {
	this->x = x;
	this->x1 = x1;
	this->x2 = 0;
}

FuzzyNumber::FuzzyNumber(double x, double x1, double x2) {
	this->x = x;
	this->x1 = x1;
	this->x2 = x2;
}

FuzzyNumber FuzzyNumber::Init(double x, double y, double z)
{
	FuzzyNumber tmp;
	tmp.x = x;
	tmp.x1 = x1;
	tmp.x2 = x2;
	return tmp;
}

void FuzzyNumber::Read()
{
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter x1: ";
	cin >> x1;
	cout << "Enter x2: ";
	cin >> x2;
	cout << endl;
	return;
}
void FuzzyNumber::Display()
{
	cout << "x: " << x << endl;
	cout << "x1: " << x1 << endl;
	cout << "x2: " << x2 << endl;
	cout << endl;
}
string FuzzyNumber::toString()
{
	stringstream ss;
	ss << "x: " << x << " x1: " << x1 << " x2: " << x2;
	string str = ss.str();

	return str;
}

double FuzzyNumber::getx() {
	return x;
}
double FuzzyNumber::getx1() {
	return x1;
}
double FuzzyNumber::getx2() {
	return x2;
}

FuzzyNumber FuzzyNumber::addition(FuzzyNumber first, FuzzyNumber second) {
	return FuzzyNumber(first.getx() + second.getx() - first.getx1() + second.getx2(), first.getx() + second.getx(), first.getx() + second.getx() + first.getx2() + second.getx2());
}
FuzzyNumber FuzzyNumber::substraction(FuzzyNumber first, FuzzyNumber second) {
	return FuzzyNumber(first.getx() - second.getx() - first.getx1() + second.getx2(), first.getx() - second.getx(), first.getx() - second.getx() + first.getx2() + second.getx2());
}
double FuzzyNumber::multiply(FuzzyNumber first, FuzzyNumber second) {
	return (first.getx() * second.getx() - second.getx() * first.getx1(), first.getx() * second.getx(), first.getx() * second.getx() + first.getx2() + second.getx2());
}
FuzzyNumber FuzzyNumber::TurnoverNumber(FuzzyNumber first, double number) {
	return FuzzyNumber((1 / (first.getx() + first.getx1())), 1 / first.getx(), 1 / (first.getx() - first.getx1()));
}
double FuzzyNumber::division(FuzzyNumber first, FuzzyNumber second) {
	return (first.getx() / second.getx() - second.getx() / first.getx1(), first.getx() / second.getx(), first.getx() / second.getx() + first.getx2() + second.getx2());
}
const FuzzyNumber FuzzyNumber::operator= (const FuzzyNumber& fuzzy) {
	if (&fuzzy == this) return *this;
	x = fuzzy.x;
	x1 = fuzzy.x1;
	x2 = fuzzy.x2;
	return *this;
}
FuzzyNumber FuzzyNumber::operator+(FuzzyNumber& fuzzy)
{
	FuzzyNumber tmp;
	tmp.x = this->x + fuzzy.getx();
	tmp.x1 = this->x1 + fuzzy.getx1();
	tmp.x2 = this->x2 + fuzzy.getx2();
	return tmp;
}
FuzzyNumber FuzzyNumber::operator-(FuzzyNumber& fuzzy)
{
	FuzzyNumber tmp;
	tmp.x = this->x - fuzzy.getx();
	tmp.x1 = this->x1 - fuzzy.getx1();
	tmp.x2 = this->x2 - fuzzy.getx2();
	return tmp;
}

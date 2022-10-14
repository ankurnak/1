#pragma once
#pragma once
#pragma once
#include <iostream>
#include <string>
#include<cassert>
using namespace std;

#include <iostream>
using namespace std;
/*
Лабораторна робота 2 (Курнаков Антон 203ТН)
Реалізувати клас Fazzynumber для роботи з нечіткими числами, які
представляються трійками чисел (х – e1, х, х + e2). Для чисел А = (А - аl, А, А +
аr) і В = (В - bl, В, В + br) арифметичні операції виконуються по наступних
формулах:
• додавання А + В = (А + В - аl - br, А + В, А + В + ar + br);
• вирахування А - В = (А - В - аl - br, А - В, А - В + ar + br);
• множення А * В = (A * B – B * a l – А * bl + al * bl, А * В, A * B
+ B * al + А * bl + al * bl);
• обернене число А = (1 / (А + ar), 1/ А, 1 / (А – аl)), А > 0;
• ділення А / В = ((A - al) / (В + br), А / В, (А + аr) / (В - bl)), В > 0;
*/
class FuzzyNumber
{

	double x, x1, x2;
public:
	FuzzyNumber();
	FuzzyNumber(double x);
	FuzzyNumber(double x, double x1);
	FuzzyNumber(double x, double x1, double x2);

	FuzzyNumber Init(double x, double x1, double x2);

	void Read();
	void Display();
	string toString();

	double getx() {
		return x;
	}
	double getx1() {
		return x1;
	}
	double getx2() {
		return x2;
	}



	FuzzyNumber addition(FuzzyNumber first, FuzzyNumber second);
	FuzzyNumber substraction(FuzzyNumber first, FuzzyNumber second);
	double multiply(FuzzyNumber first, FuzzyNumber second);
	FuzzyNumber TurnoverNumber(FuzzyNumber first, double number);
	double division(FuzzyNumber first, FuzzyNumber second);
	const FuzzyNumber operator= (const FuzzyNumber& fuzzy);
	FuzzyNumber operator+ (FuzzyNumber& fuzzy);
	FuzzyNumber operator- (FuzzyNumber& fuzzy);
};

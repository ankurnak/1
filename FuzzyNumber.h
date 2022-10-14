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
����������� ������ 2 (�������� ����� 203��)
���������� ���� Fazzynumber ��� ������ � ��������� �������, ��
��������������� ������� ����� (� � e1, �, � + e2). ��� ����� � = (� - �l, �, � +
�r) � � = (� - bl, �, � + br) ���������� �������� ����������� �� ���������
��������:
� ��������� � + � = (� + � - �l - br, � + �, � + � + ar + br);
� ����������� � - � = (� - � - �l - br, � - �, � - � + ar + br);
� �������� � * � = (A * B � B * a l � � * bl + al * bl, � * �, A * B
+ B * al + � * bl + al * bl);
� �������� ����� � = (1 / (� + ar), 1/ �, 1 / (� � �l)), � > 0;
� ������ � / � = ((A - al) / (� + br), � / �, (� + �r) / (� - bl)), � > 0;
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

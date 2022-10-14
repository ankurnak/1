#include<iostream>
#include "C:Downloads\Telgram Desktop\Lab5_Anton\Lab5\FuzzyNumber.h"
using namespace std;
int main()
{
	int main()
	{


		FuzzyNumber manager;


		FuzzyNumber fuzzy;
		fuzzy.Read();

		fuzzy.Display();
		cout << "toString: " << fuzzy.toString() << endl << endl;
		//конст з 1
		cout << "1 param: " << endl;
		FuzzyNumber fuzzy3 = FuzzyNumber(3);
		fuzzy3.Display();
		//конст з 2
		cout << "2 param: " << endl;
		FuzzyNumber fuzzy2 = FuzzyNumber(3, 2);
		fuzzy2.Display();
		//конст з 3
		cout << "3 param: " << endl;
		FuzzyNumber fuzzy1 = FuzzyNumber(3, 2, 1);
		fuzzy1.Display();

		FuzzyNumber result;


		//Додавання
		cout << "Addition: " << endl;
		result = manager.addition(fuzzy, fuzzy1);
		result.Display();

		//Віднімання
		cout << "Subtraction: " << endl;
		result = manager.substraction(fuzzy, fuzzy1);
		result.Display();

		//множення
		cout << "Multiply: " << manager.multiply(fuzzy, fuzzy1) << endl << endl;

		//обернене
		cout << "Turnover number: " << endl;
		result = manager.TurnoverNumber(fuzzy, 5);
		result.Display();
		//ділення
		cout << "Division: " << manager.division(fuzzy, fuzzy1) << endl << endl;
		fuzzy.Display();
		fuzzy1.Display();

		//Перегрузка оператора присвоєння
		cout << "= overload" << endl;
		FuzzyNumber assign;
		assign = fuzzy;
		assign.Display();

		//Перегрузка оператора додавання
		cout << "+ overload" << endl;
		result = fuzzy + fuzzy1;
		result.Display();

		//Перегрузка оператора віднімання
		cout << "- overload" << endl;
		result = fuzzy - fuzzy1;
		result.Display();
	}




	return 0;
}
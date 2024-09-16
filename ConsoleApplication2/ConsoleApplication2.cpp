#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Введите число: ";
	cin >> x;

	int y;
	cout << "Введите число: ";
	cin >> y;

	int arith = (x + y) / 2;
	cout << arith;

	char oper;
	cout << "\nВведите знак операции : (+, -, * или /): ";
	cin >> oper;
	//	
	//	int result;
	//	if (oper == '+')
	//	{
	//		result = x + y;
	//		cout << result;
	//	}
	//	else if (oper == '-')
	//	{
	//		result = x - y;
	//		cout << result;
	//	}
	//	else if (oper == '*')
	//	{
	//		result = x * y;
	//		cout << result;
	//	}
	//	else if (oper == '/')
	//	{
	//		result = x / y;
	//		cout << result;
	//	else 
	//	{
	//		cout << "Неправильно введено значение" << endl;
	//	} 
	// 
	// }

	int result;
	switch (oper)
	{
	case '+':
		result = x + y;
		cout << result;
		break;
	case '-':
		result = x - y;
		cout << result;
		break;
	case '*':
		result = x * y;
		cout << result;
		break;
	case '/':
		if (y == 0)
		{
			cout << "На ноль делить нельзя" << endl;
		}
		else
		{
			result = x / y;
			cout << result;
			break;
		}
	default:
		cout << "Некорректно введены данные" << endl;
	}

	int a;
	while (true)
	{
		cout << "\nВведите число больше 0: ";
		cin >> a;
		if (a > 0)
		{
			break;
		}
		else
		{
			cout << "Число меньше 0, введите другое: " << endl;
		}
	}
	cout << "Было введено число: " << a << endl;


	int summa = 0;
	for (int k = 1; k <= a; k++)
	{
		summa += k;
	}
	cout << "Сумма от 1 до введённого числа равняется = " << summa << endl;

	int array[] = { 10,9,33,15,13,100,2,11,22,666 };
	for (int a : array)
	{
		cout << a << " ";
	}

	cout << "\nЧисла на чётных позициях: ";

	for (int i = 0; i < 10; i++)
		if (i % 2 == 0)
		{
			cout << array[i] << " ";
		}

	int sum = 0;

	for (int i = 0; i < 10; i++)
		if (i % 2 != 0)
		{
			sum += array[i];
		}
	cout << "\nСумма чисел на нечётных позициях = " << sum << endl;

}
	



	




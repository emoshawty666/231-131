#include <iostream>
using namespace std;


enum ownErrors
{
	dontlieme,
	notbornyet,
	negative
};

class BirthYearException : public exception 
{
private:
	ownErrors code;
public:
	BirthYearException(ownErrors code) : code(code) {}

	const char* what() const throw() override 
	{
		if (code == ownErrors::dontlieme) return "I dont believe you";
		if (code == ownErrors::notbornyet) return "You aint born yet";
		if (code == ownErrors::negative) return "You wrote a negative number";

	}
};

class BirthYear
{
private:
	int year;

public:
	BirthYear(int year) : year(year) 
	{
		if (year < 1850) throw BirthYearException(ownErrors::dontlieme);
		if (year > 2024) throw BirthYearException(ownErrors::notbornyet);
		if (year < 0) throw BirthYearException(ownErrors::negative);
	}
	int getYear()
	{
		return year;
	}
};



int main()
{
	//1. Ввести число 1, 2 или 3 и выведите его в текстовом виде : "Один", "Два" или "Три".
	//2. Если ввёл другое число, в обработке выведите в консоль : "Некорректное значение".

	int x;
	cout << "choose 1,2 or 3: ";
	cin >> x;
	
	try
	{
		if (x < 1 or x > 3) throw logic_error("Incorrect value");

		if (x == 1)
		{
			cout << "One" << endl;
		}
		else if (x == 2)
		{
			cout << "Two" << endl;
		}
		else if (x == 3)
		{
			cout << "Three" << endl;
		}

	}
	catch (logic_error error)
	{
		cout << error.what() << endl;
	}
	 


	//3. Попросите пользователя ввести год своего рождения.
	//4. Если число меньше 1850, то выведите в консоли : "Что-то не верится...".
	//5. Если число больше, чем текущий год, то выведите в консоли : "Вы ещё не родились".
	//6. Если отрицательное число, то выведите в консоли : "Вы ввели отрицательное число!".
	//7. Если ввод был корректный, то выведите в консоль : "Спасибо!".


	/*try
	{
		int birthYear;
		//cout << "Write yout birth date, please: ";
		cin >> birthYear;

		if (birthYear < 1850) throw range_error("I don't believe you...");
		else if (birthYear > 2024) throw range_error("You ain't born yet");
		else if (birthYear < 0) throw range_error("You wrote negative number!");

		//cout << "Thanks!" << endl;
	}

	catch (range_error e)
	{
		//cout << e.what() << endl;
	}*/
	
	//8. Создайте свой класс исключений с перечислением и переработайте 3-7, чтобы выбрасывалось уже Ваше исключение.

	int Year;
	cout << "Enter your birth year, please: ";
	cin >> Year;
	
	try {
		BirthYear birthYear(Year);
		cout << "Thank you!" << endl;
	}
	catch (const BirthYearException& e) {
		cout << e.what() << endl;
	}
}
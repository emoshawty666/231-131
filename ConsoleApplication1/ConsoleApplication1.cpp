#include <iostream> //подключение библиотеки input-output 
using namespace std; 

int main() // главная функция
{ //начало 
	setlocale(LC_ALL, "Russian"); // функция для вывода русского языка в консоли
	cout << "First string" << endl; // вывод строки 
  string s = "Первая строка \nВторая строка"; // задаём строку
  cout << s << endl; // вывод строки
  
  string special = "Спецсимволы\"\\\""; // задаём строку
  cout << special << endl; // вывод строки

	int a = 150;
	float b = 15.933;
	char c = 250;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	int z = 14;
	string x = "октября";
	int v = 2005;
	
	cout << "Моя дата рождения:" << z << " " << x << " " << v << " " << "года" << endl;

	float k = 2.3;
	string l = "WINDOWS";
	
	cout << k << " " << l << endl;

	


} //конец

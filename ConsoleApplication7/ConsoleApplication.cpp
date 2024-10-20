#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <regex>
#include <cmath>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

void printVector(const vector<float>& v2);

class Settings
{
public:
	static map<string, string> settingsMap;

	static void Add(string key,string value)
	{
		settingsMap[key] = value;
	}

	static string Get(string key)
	{
		if (settingsMap.find(key) != settingsMap.end())
		{
			return settingsMap[key];
		}
		else
		{
			return "Key is not found";
		}
	}

	static void Print()
	{
		for (auto pair : settingsMap)
		{
			cout << pair.first << " : " << pair.second << endl;
		}
	}

};


map<string, string> Settings::settingsMap;

int main()
{
	//1. Попросите пользователя ввести строку и запишите её в переменную.
	string smth;
	cout << "Write something: ";
	getline(cin, smth);

	//2. Выведите в консоли подстроку из строки от пользователя от 2 - го символа до 4 - го символа включительно.

	if (smth.size() >= 4)
	{
		string substring = smth.substr(1, 3);
		cout << "Substring from 2 to 4 : " << substring << endl;
	}
	else
	{
		cout << "Your message is too short" << endl;
	}

	//3. Выведите индекс первого вхождения строки "a", иначе выведите "Символа a не найдено".
	int index = smth.find("a");
	if (index != string::npos)
	{
		cout << "Index of first occurrence 'a' is " << index << endl;
	}
	else
	{
		cout << "Symbol 'a' was not found" << endl;
	}

	//1. Ввести своё имя и запишите его в переменную.
	//2. Имя должно быть от 2 символов до 32 и содержать только буквы, первая должна быть заглавной.

	string name;
	cout << "Write your name, please: ";
	getline(cin, name);
	regex nameRegex("^[A-Z][a-zA-Z]{1,31}$");

	if (regex_search(name, nameRegex))
	{
		cout << "Name is correct" << endl;
	}
	else
	{
		cout << "Name is uncorrect" << endl;
	}



	//3. Создайте текст, в котором должно быть несколько e - mail адресов.
	//4. Bытащите из неё все e - mail адреса и выведите их в консоль.

	string text = "There are some e-mails: example@example.com, test.email@domain.org и user123@sub.domain.com.";

	regex emailRegex(R"((\w+[\.\w-]*)@\w+(\.\w+)+)");
	sregex_iterator it(text.begin(), text.end(), emailRegex);
	sregex_iterator end;

	cout << "Found e-mails: \n";
	for (; it != end; ++it) {
		cout << it->str() << endl;
	}


	//1. Ввести радиус окружности.
	//2. Выведите длину окружности.
	//3. Округлите до 3 - х знаков после запятой.
	double radius;
	cout << "Enter radius: ";
	cin >> radius;

	double S = 2 * M_PI * radius;
	cout << "Circumference: " << round(S * 1000) / 1000 << endl;

	//4. Ввести произвольную строку.
	//5. Запишите в конец текстового файла и запросите снова строку.
	//6. Если пользователь вводит read, то должно быть выведено всё содержимое текстового файла.
	//7. Если пользователь вводит erase, то необходимо очистить файл.
	//8. Если пользователь вводит exit, то необходимо завершить программу.


	//string input;
	//string file_name = "user_file.txt";

	//while (true)
	//{
	//	cout << "Enter something";
	//	getline(cin, input);
	//	if (input == "read")
	//	{
	//		ifstream file(file_name);
	//		if (file.is_open())
	//		{
	//			string line;
	//			while (getline(file, line))
	//			{
	//				cout << line << endl;
	//			}
	//			file.close();
	//		}
	//		else
	//		{
	//			cerr << "Something gone wrong" << endl;
	//		}
	//	}
	//	else if (input == "erase")
	//	{
	//		ofstream file(file_name, ofstream::trunc);
	//		file.close();
	//		cout << "File clearned" << endl;
	//	}
	//	else if (input == "exit")
	//	{
	//		break;
	//	}
	//	else
	//	{
	//		ofstream file(file_name, ios::app);
	//		if (file.is_open()) {
	//			file << input << endl; // Записываем строку в файл
	//			file.close();
	//		}
	//		else
	//		{
	//			cout << "Не удалось открыть файл для записи.\n";
	//		}
	//	}
	//}


	//1. Создайте пустой вектор с типом float.
	//2. Добавьте 5 элементов в вектор.

	vector<float> v1;

	v1.push_back(1.14);
	v1.push_back(2.24);
	v1.push_back(3.34);
	v1.push_back(4.44);
	v1.push_back(5.54);


	//3. Создайте функцию, которая принимает вектор.
	//4. Вызовите созданную функцию.
	//5. Вставьте ещё один элемент между 3 и 4 элементами.
	//6. Проверьте правильность сделанного.

	cout << "Vector before new element: ";
	printVector(v1);

	v1.insert(v1.begin() + 3, 6.64);


	cout << "Vector after new element: ";
	printVector(v1);

	//7. Удалите последний элемент.

	v1.pop_back();
	printVector(v1);


	//9. Создайте класс Settings и добавьте в него поле типа Map.
	//10. Добавьте функцию Add, принимающую ключ и значение.
	//11. Добавьте функцию Get, принимающую ключ и возвращающая ей значение в Map.
	//12. Добавьте функцию Print, которая будет выводить в консоль содержимое Map.
	//13. Проверьте работу всех созданных методов.

	/*Settings mySettings;
	
	mySettings.Add("ball", "Football");
	mySettings.Add("KaiAngel", "9mice");

	cout << "Value of 'ball': " << mySettings.Get("ball") << endl;
	mySettings.Print();*/

	//14. Сделайте поле Map статическим, сделайте статическими все его функции.
	//15. Проверьте его работу теперь.

	Settings::Add("ball", "Football");
	Settings::Add("KaiAngel", "9mice");
	cout << "Value of 'ball': " << Settings::Get("ball") << endl;
	Settings::Print();

}

void printVector(const vector<float>& v2)
{
	for (float i: v2)
	{
		cout << i << " ";
	}
	cout << endl;
}
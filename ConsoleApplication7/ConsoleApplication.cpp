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
	//1. ��������� ������������ ������ ������ � �������� � � ����������.
	string smth;
	cout << "Write something: ";
	getline(cin, smth);

	//2. �������� � ������� ��������� �� ������ �� ������������ �� 2 - �� ������� �� 4 - �� ������� ������������.

	if (smth.size() >= 4)
	{
		string substring = smth.substr(1, 3);
		cout << "Substring from 2 to 4 : " << substring << endl;
	}
	else
	{
		cout << "Your message is too short" << endl;
	}

	//3. �������� ������ ������� ��������� ������ "a", ����� �������� "������� a �� �������".
	int index = smth.find("a");
	if (index != string::npos)
	{
		cout << "Index of first occurrence 'a' is " << index << endl;
	}
	else
	{
		cout << "Symbol 'a' was not found" << endl;
	}

	//1. ������ ��� ��� � �������� ��� � ����������.
	//2. ��� ������ ���� �� 2 �������� �� 32 � ��������� ������ �����, ������ ������ ���� ���������.

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



	//3. �������� �����, � ������� ������ ���� ��������� e - mail �������.
	//4. B������� �� �� ��� e - mail ������ � �������� �� � �������.

	string text = "There are some e-mails: example@example.com, test.email@domain.org � user123@sub.domain.com.";

	regex emailRegex(R"((\w+[\.\w-]*)@\w+(\.\w+)+)");
	sregex_iterator it(text.begin(), text.end(), emailRegex);
	sregex_iterator end;

	cout << "Found e-mails: \n";
	for (; it != end; ++it) {
		cout << it->str() << endl;
	}


	//1. ������ ������ ����������.
	//2. �������� ����� ����������.
	//3. ��������� �� 3 - � ������ ����� �������.
	double radius;
	cout << "Enter radius: ";
	cin >> radius;

	double S = 2 * M_PI * radius;
	cout << "Circumference: " << round(S * 1000) / 1000 << endl;

	//4. ������ ������������ ������.
	//5. �������� � ����� ���������� ����� � ��������� ����� ������.
	//6. ���� ������������ ������ read, �� ������ ���� �������� �� ���������� ���������� �����.
	//7. ���� ������������ ������ erase, �� ���������� �������� ����.
	//8. ���� ������������ ������ exit, �� ���������� ��������� ���������.


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
	//			file << input << endl; // ���������� ������ � ����
	//			file.close();
	//		}
	//		else
	//		{
	//			cout << "�� ������� ������� ���� ��� ������.\n";
	//		}
	//	}
	//}


	//1. �������� ������ ������ � ����� float.
	//2. �������� 5 ��������� � ������.

	vector<float> v1;

	v1.push_back(1.14);
	v1.push_back(2.24);
	v1.push_back(3.34);
	v1.push_back(4.44);
	v1.push_back(5.54);


	//3. �������� �������, ������� ��������� ������.
	//4. �������� ��������� �������.
	//5. �������� ��� ���� ������� ����� 3 � 4 ����������.
	//6. ��������� ������������ ����������.

	cout << "Vector before new element: ";
	printVector(v1);

	v1.insert(v1.begin() + 3, 6.64);


	cout << "Vector after new element: ";
	printVector(v1);

	//7. ������� ��������� �������.

	v1.pop_back();
	printVector(v1);


	//9. �������� ����� Settings � �������� � ���� ���� ���� Map.
	//10. �������� ������� Add, ����������� ���� � ��������.
	//11. �������� ������� Get, ����������� ���� � ������������ �� �������� � Map.
	//12. �������� ������� Print, ������� ����� �������� � ������� ���������� Map.
	//13. ��������� ������ ���� ��������� �������.

	/*Settings mySettings;
	
	mySettings.Add("ball", "Football");
	mySettings.Add("KaiAngel", "9mice");

	cout << "Value of 'ball': " << mySettings.Get("ball") << endl;
	mySettings.Print();*/

	//14. �������� ���� Map �����������, �������� ������������ ��� ��� �������.
	//15. ��������� ��� ������ ������.

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
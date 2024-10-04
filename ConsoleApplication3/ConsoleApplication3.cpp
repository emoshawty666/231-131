#include <iostream>

using namespace std;

void printArray(int* begin, int* end);
int diff(int a, int b);
int summ(int a, int b);
int (*chooseFunction(char operation))(int, int);


int main()
{
	int* point;
	int x = 52;
	point = &x;


	//cout << "point = " << point << endl;
	//cout << "*point = " << *point << endl;

	*point = 69;
	//cout << "x = " << x << "point = " << *point << endl;


	int array[] = { 1,32,15,10,4 };
	for (int* i = array; i != array + 5; i++) {
		//cout << "Your sum is " << *i << endl;
	}


	//int a = 10;
	//int const m = &a;
	//m = 20
	// ошибка
	
	int array1[] = { 1,2,3,4,5 };
	//printArray(begin(array1), end(array1));
	//cout << "____________" << endl;

	int a = 15;
	int b = 10;
	//diff(a, b);
	//summ(a, b);


	//4. Создайте функцию, принимающую 1 параметр типа char.
	//5. Функция должна возвращать указатель на одну из двух функций.
	//6. Проверьте работу созданных функций.

	char op;
	cout << "Choose + or -: ";
	cin >> op;
	
	int (*operationFunc)(int, int) = chooseFunction(op);

	if (operationFunc) {
		float a = 10, b = 15;
		cout << "Result: " << operationFunc(a, b) << endl;
	}
	else {
		cout << "Something went wrong!" << endl;
	}

	//7. Создайте динамический указатель типа float.
	//8. Выведите его в консоль, а после удалите его из памяти с помощью delete.

	float* dynamicFloat = new float(3.14);

	cout << *dynamicFloat << endl;

	delete dynamicFloat;

}

int diff(int a, int b) {
	return a - b;
}

int summ(int a, int b) {
	return a + b;
}

void printArray(int* begin, int* end) {
	int sumArray = 0;
	for (int* i = begin; i < end; i++) {
		sumArray += *i;
	}
	cout << sumArray << endl;
}

int (*chooseFunction(char operation))(int, int)
{
	if (operation == '+') {
		return &summ;
	}
	else if (operation == '-') {
		return &diff;
	}
	return nullptr;
}
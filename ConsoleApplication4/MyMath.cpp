#include "MyMath.h"

int MyMath::operation = 0;


int MyMath::Add(float a, float b)
{
	operation++;
	return a + b;
}

int MyMath::Sub(float a, float b)
{
	operation++;
	return a - b;
}

int MyMath::Mult(float a, float b)
{
	operation++;
	return a * b;
}

int MyMath::Div(float a, float b)
{
	operation++;
	return a / b;
}


int MyMath::getOperation()
{
	return operation;
}
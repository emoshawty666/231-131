#pragma once
class MyMath
{
private:
	static int operation;

public:
	static int Add(float a, float b);
	static int Sub(float a, float b);
	static int Mult(float a, float b);
	static int Div(float a, float b);


	static int getOperation();

};


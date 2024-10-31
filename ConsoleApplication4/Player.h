#pragma once
#include <string>
#include <iostream>
using namespace std;

struct Player
{
	int id;
	string login;
	string password;

	void printInfo()
	{
		cout << "Player ID " << id << endl;
		cout << "Login " << login << endl;
		cout << "Password " << password << endl;
	}
};


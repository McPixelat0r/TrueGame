#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
#include <ctype.h>

using namespace std;

class player
{
public:
	string name;
	int points;
	bool isAlreadyA;
	string choice;
	int money;
	int bet;
	player();
	string playerName(string n);
	int totalPoints(int p);
	int lessMoney(int lm);
	int addMoney(int am);
	bool aTwice(bool b);
	bool aCheck(int a);
	string aChoice(string c);
	int betCheck()
};



#include "Player.h"
#include <string>
#include <iostream>
#include <Windows.h>
#include <ctype.h>
using namespace std;

player::player()
{
	name = "default";
}
string player::playerName(string n)
{
	name = n;
	return name;
}
int player::totalPoints(int p)
{
	points = p;
	return points;
}
int player::lessMoney(int lm)
{
	money -= lm;
	return money;
}
int player::addMoney(int am)
{
	money += am;
	return money;
}
string player::aChoice(string c)
{
	choice = c;
	return choice;
}
bool player::aTwice(bool iaa)
{
	isAlreadyA = iaa;
	return isAlreadyA;
}
int player::betCheck()
{
	if (bet > money)
	{
		while (bet > money)
		{
			bet--;
		}
	}
	return bet;
}
bool player::aCheck(int a)
{
	if (a == 1)
	{
		isAlreadyA = true;
	}
}
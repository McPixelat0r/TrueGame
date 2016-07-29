
#include <string>
#include <iostream>
#include <Windows.h>
#include <ctype.h>
#include "Player.h"
#include <stdlib.h>
#include "Limits.h"
#include <array>
/*template <typename T, size_t N> 
char (&ArraySizeHelper(T (&array)[N]))[N];
#define arraysize(array) (sizeof(ArraySizeHelper(array)))*/
/*This is for taking the length of the arrays!*/
using namespace std;
/*There are 52 cards total*/



void main()
{
	int allCards[52] = { 1, 1, 1 , 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8 ,8, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };
	bool allCardsCheck[52] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
	int r = rand() % 51;
	player p1;
	player p2;
	cout << "Player 1, please enter your name." << endl;
	string pInput;
	cin >> pInput;
	string p1Name = p1.playerName(pInput);
	cout << "Player 2, please enter your name." << endl;
	cin >> pInput;
	string p2Name = p2.playerName(pInput);
	
	
}



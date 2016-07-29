#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
#include <ctype.h>
#include "Player.h"
using namespace std;
class controls
{
	public:
		controls();
		int trueBet;
		int leastNum(int a, int b);
		bool overTotal();
};
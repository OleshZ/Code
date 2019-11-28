// лаба 2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <stdlib.h>
#include"Header.h"
using namespace std;

int main()
{
	string output = "";
	string x = "", y = "";
	y = "129999";
	x = "99999";
	output = Func(y,x);
	cout << output;
}
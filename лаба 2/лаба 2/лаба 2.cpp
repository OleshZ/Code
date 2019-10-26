// лаба 2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	string x = " ", y = " ";
	y += "3459";
	x += "20022";
	int lx = x.length() - 1;
	int ly = y.length() - 1;
	int lmax;
	if (lx >= ly)
	{
		lmax = lx;
		for (int Cycle1 = ly; Cycle1 < lmax; Cycle1++)
		{
			y = " " + y;
		}
	}
	else
	{
		lmax = ly;
		for (int Cycle1 = lx; Cycle1 < lmax; Cycle1++)
		{
			x = " " + x;
		}
	}


	string* InputArray1 = new string[x.length()];// Створення динамічного масиву для вводу
	string* InputArray2 = new string[y.length()];// Створення динамічного масиву для вводу
	int* SInputArray1 = new int[x.length()];// Створення динамічного масиву для вводу
	int* SInputArray2 = new int[y.length()];// Створення динамічного масиву для вводу
	int* SInputArrayS = new int[lmax + 1];

	for (int Cycle1 = lx; Cycle1 > 0; Cycle1--)//Реверс Масив
	{
		InputArray1[Cycle1] = x[Cycle1];
		SInputArray1[Cycle1] = atoi(InputArray1[Cycle1].c_str());//конвертування в інт
		cout << SInputArray1[Cycle1] << "!" << Cycle1;
		SInputArrayS[Cycle1] = 0;
	}
	cout << "\n";
	for (int Cycle1 = ly; Cycle1 > 0; Cycle1--)//Реверс Масив
	{
		InputArray2[Cycle1] = y[Cycle1];
		SInputArray2[Cycle1] = atoi(InputArray2[Cycle1].c_str());//конвертування в інт
		cout << SInputArray2[Cycle1] << "!" << Cycle1;
		SInputArrayS[Cycle1] = 0;
	}


	for (int Cycle1 = lmax; Cycle1 > 0; Cycle1--)//Реверс Масив
	{
		if (SInputArray1[Cycle1] >= 10 || SInputArray1[Cycle1] < 0)
		{
			SInputArrayS[Cycle1] += ((0 + SInputArray2[Cycle1]) % 10);
			SInputArrayS[Cycle1 - 1] += ((0 + SInputArray2[Cycle1]) / 10);
		}
		else if (SInputArray2[Cycle1] >= 10 || SInputArray2[Cycle1] < 0)
		{
			SInputArrayS[Cycle1] += ((SInputArray1[Cycle1] + 0) % 10);
			SInputArrayS[Cycle1 - 1] += ((SInputArray1[Cycle1] + 0) / 10);
		}
		else
		{
			SInputArrayS[Cycle1] += ((SInputArray1[Cycle1] + SInputArray2[Cycle1]) % 10);
			SInputArrayS[Cycle1 - 1] += ((SInputArray1[Cycle1] + SInputArray2[Cycle1]) / 10);
		}
		
	}
	cout << "\n";
	for (int Cycle1 = 1; Cycle1 < lmax + 1; Cycle1++)
	{
		cout << SInputArrayS[Cycle1];//<< "!" << Cycle1;
	}
	delete[]InputArray1;
	delete[]InputArray2;
	delete[]SInputArray1;
	delete[]SInputArray2;
}
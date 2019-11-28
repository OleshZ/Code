#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
string Func(string x, string y)
{
	string output;
	int lx = x.length();
	int ly = y.length();
	int lmax;
	if (lx >= ly)
	{
		lmax = lx;
		for (int Cycle1 = ly; Cycle1 < lmax; Cycle1++)
		{
			y = "0" + y;
		}
	}
	else
	{
		lmax = ly;
		for (int Cycle1 = lx; Cycle1 < lmax; Cycle1++)
		{
			x = "0" + x;
		}
	}
	string* InputArray1 = new string[x.length()];// Створення динамічного масиву для вводу
	string* InputArray2 = new string[y.length()];// Створення динамічного масиву для вводу
	int* SInputArray1 = new int[x.length()];// Створення динамічного масиву для вводу
	int* SInputArray2 = new int[y.length()];// Створення динамічного масиву для вводу
	int* SInputArrayS = new int[lmax + 1];
	for (int Cycle1 = lmax - 1; Cycle1 >= 0; Cycle1--)//Реверс Масив
	{
		InputArray1[lmax - 1 - Cycle1] = x[Cycle1];
		InputArray2[lmax - 1 - Cycle1] = y[Cycle1];
		SInputArray1[lmax - 1 - Cycle1] = atoi(InputArray1[lmax - 1 - Cycle1].c_str());//конвертування в інт
		SInputArray2[lmax - 1 - Cycle1] = atoi(InputArray2[lmax - 1 - Cycle1].c_str());//конвертування в інт
	}
	for (int Cycle1 = 0; Cycle1 <= lmax; Cycle1++)
	{
		SInputArrayS[Cycle1] = 0;
	}
	for (int Cycle1 = 0; Cycle1 <= lmax - 1; Cycle1++)
	{
		SInputArrayS[Cycle1] += ((SInputArray2[Cycle1] + SInputArray1[Cycle1]) % 10);
		SInputArrayS[Cycle1 + 1] += ((SInputArray2[Cycle1] + SInputArray1[Cycle1]) / 10);

	}
	for (int Cycle1 = lmax; Cycle1 >= 0; Cycle1--)//Реверс Масив
	{
		if (!(SInputArrayS[Cycle1] == 0 && Cycle1 == lmax))
			output += (std::to_string(SInputArrayS[Cycle1]));
	}
	delete[]InputArray1;
	delete[]InputArray2;
	delete[]SInputArray1;
	delete[]SInputArray2;
	delete[]SInputArrayS;
	return output;
}
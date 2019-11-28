// 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	
	ifstream inf;
	string C1, C2,input;
	inf.open("D:/file1.txt");
	int g = 0;
	int am1 = 0;
	int am2 = 0;
	while ( g == 0)
	{
		inf >> input;
		if (input == ".")g = 1;
		else
		{
			C1 += " " + input;
			am1++;
		}	
	}
	g = 0;
	while (g == 0)
	{
		inf >> input;
		if (input == ".")
		{
			g = 1;
		}
		else
		{
			C2 += " " + input;
			am2++;
		}
	}

	inf.close();
	g = 0;
	string* CC1 = new string[am1];
	string* CC2 = new string[am2];
	am1 = 0;
	am2 = 0;
	inf.open("D:/file1.txt");
	while (g == 0)
	{
		inf >> input;
		if (input == ".")g = 1;
		else
		{
			CC1[am1] = input;
			am1++;
		}
	}
	g = 0;
	while (g == 0)
	{
		inf >> input;
		if (input == ".")
		{
			g = 1;
		}
		else
		{
			CC2[am2] = input;
			am2++;
		}
	}
	
	int lmax=0;
	string CC1max="", CC2max="";
	for (int Cycle1 = 0; Cycle1 < am1; Cycle1++)
	{
		for (int Cycle2 = 0; Cycle2 <= am2; Cycle2++)
		{
			if (CC1[Cycle1] == CC2[Cycle2] && (CC1[Cycle1].length())>=lmax)
			{
				lmax = CC1[Cycle1].length();
				CC1max = CC1[Cycle1];
				CC2max = CC2[Cycle2];
			}
		}
	}
	
	cout << CC1max<<" "<< CC2max;
	inf.close();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

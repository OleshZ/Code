// 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	string dot[] = { "A","B","C","D","E","F","G","H","I" };
	int x[] = { 3,4,-3,-4,10,10,1,0,6 };
	int y[] = { 3,-3,-3,8,1,-8,-3,5,1 };
	int MaxV = 0;
	int MaxV1 = 0;
	int MaxV2 = 0;
	int MaxV3 = 0;
	int indMaxV1 = 0;
	int indMaxV2 = 0;
	int indMaxV3 = 0;
	string resultdot[] = {"","",""};
	for (int Cycle1 = 0; Cycle1 < 9; Cycle1++)
	{
		for (int Cycle2 = 0; Cycle2 < 9; Cycle2++)
		{
			if (pow((x[Cycle1]-x[Cycle2]),2) + pow((y[Cycle1]-y[Cycle2]),2) >= MaxV)
			{
				MaxV = pow((x[Cycle1] - x[Cycle2]),2) + pow((y[Cycle1] - y[Cycle2]),2);
				indMaxV1 = Cycle1;
				indMaxV2 = Cycle2;
			}
		}
		
	}
	MaxV = 0;
	for (int Cycle1 = 0; Cycle1 < 9; Cycle1++)
	{
		if (Cycle1 != indMaxV1 && Cycle1 != indMaxV2)
		{
			MaxV1 = (pow((x[indMaxV1] - x[Cycle1]),2)) + (pow((y[indMaxV1] - y[Cycle1]),2));
			MaxV2 = (pow((x[indMaxV2] - x[Cycle1]),2)) + (pow((y[indMaxV2] - y[Cycle1]),2));
			if ((MaxV1 + MaxV2) >= MaxV)
			{
				MaxV = (MaxV1 + MaxV2);
				indMaxV3 = Cycle1;
			}
		}
		
	}
	cout << dot[indMaxV1] << endl;
	cout << dot[indMaxV2] << endl;
	cout << dot[indMaxV3] << endl;
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

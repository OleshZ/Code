

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	string Input1 = "";
	string Input2 = "";
	cout << "Please enter 1 num ";
	cin >> Input1;
	cout << "Please enter 2 num ";
	cin >> Input2;
	int SizeofInput1, SizeofInput2,MaxSize;
	SizeofInput1 = Input1.length();
	SizeofInput2 = Input2.length();
	if (SizeofInput1 > SizeofInput2)
	{
		MaxSize = SizeofInput1;
	}
	else
	{
		MaxSize = SizeofInput2;
	}
	string* InputArray1 = new string[MaxSize];// Створення динамічного масиву
	string* InputArray2 = new string[MaxSize];// Створення динамічного масиву
	int* SaveArray1 = new int[MaxSize];// Створення динамічного масиву
	int* SaveArray2 = new int[MaxSize];// Створення динамічного масиву
	int* OutPutArray = new int[MaxSize+1];// Створення динамічного масиву
	
	for (int Cicle1 = 0; Cicle1 < MaxSize; Cicle1++)
	{
		OutPutArray[Cicle1] = 0;
		SaveArray1[Cicle1] = 0;
		SaveArray2[Cicle1] = 0;
	}
	for (int Cicle1 = MaxSize-1-(MaxSize-SizeofInput1); Cicle1 >= 0; Cicle1--)//Реверс Масив
	{
			InputArray1[Cicle1] = Input1[Cicle1];
			SaveArray1[Cicle1] = atoi(InputArray1[Cicle1].c_str());
			
	}	
	for (int Cicle1 = MaxSize - 1-(MaxSize - SizeofInput1); Cicle1 >= 0; Cicle1--)//Реверс Масив
	{
			InputArray2[Cicle1] = Input2[Cicle1];
			SaveArray2[Cicle1] = atoi(InputArray2[Cicle1].c_str());

	}
	for (int Cicle1 = MaxSize-1 ; Cicle1 >= 0; Cicle1--)//Звичайний масив
	{
		if (OutPutArray[Cicle1]+SaveArray2[Cicle1] + SaveArray1[Cicle1] > 10)
		{
			OutPutArray[Cicle1] += (SaveArray2[Cicle1] + SaveArray1[Cicle1]);
			OutPutArray[Cicle1] %= 10;
			OutPutArray[Cicle1 - 1] += 1;
		}
		else
		{
			OutPutArray[Cicle1] += ( SaveArray2[Cicle1] + SaveArray1[Cicle1]);
			OutPutArray[Cicle1] %= 10;
		}
		
	}
	for (int Cicle1 = 0; Cicle1 < MaxSize; Cicle1++)//Звичайний масив
	{
		cout << OutPutArray[Cicle1];
	}
	delete[]InputArray1;
	delete[]InputArray2;
	delete[]SaveArray1;
	delete[]SaveArray2;
	delete[]OutPutArray;
}

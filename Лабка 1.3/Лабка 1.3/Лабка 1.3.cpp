#include <iostream>
using namespace std;
int Func(int InputNumber) 
{
	int Amountof1 = 0;
	do {
		if (InputNumber % 2 == 1)Amountof1++;
		InputNumber /= 2;
	} while (InputNumber != 0);
	return Amountof1;
}
int main() 
{
	int InputNumber=0;//число вводу
	int Maxnumber=0;//найбільша кількість одиничок(мах)
	int OutputNumber=0;//зберігається число в десятковій
	cin >> InputNumber;
	for (int Cycle1 = InputNumber; Cycle1 > 0; Cycle1--)//цикл перебору чисел починає з максимального
	{		
			if (Func(Cycle1) > Maxnumber)//перевірка на найбільше
			{
				Maxnumber = Func(Cycle1);
				OutputNumber = Cycle1;//запис найбільшого на данний момент
			}
	}
		cout << OutputNumber;//вивід данних
}
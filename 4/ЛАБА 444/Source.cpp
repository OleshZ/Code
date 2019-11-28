#include <iostream>
#include <cmath>
double func_e(double x, double eps)
{
	double e = 0;
	int Cycle1 = 0;
	int fact = 1;
	do
	{
		if (Cycle1 != 0)fact *= Cycle1;
		e += pow(x, Cycle1) / fact;
		Cycle1++;
	} while (pow(x, Cycle1) / fact >= eps);
	return e;
}
double func_sh(double x, double eps)
{
	double sh = 0;
	int Cycle1 = 1;
	int fact = 1;
	do
	{
		fact *= (2*Cycle1)-1;
		sh += pow(x, (2 * Cycle1) - 1) / fact;
		Cycle1++;
	} while (pow(x, (2 * Cycle1) - 1) / fact >= eps);
	return (int(sh / eps) * eps);
}
double func_ch(double x, double eps)
{
	double ch = 0;
	int Cycle1 = 0;
	int fact = 1;
	do
	{
		if (Cycle1 != 0)fact *= (2 * Cycle1);
		ch += pow(x, (2 * Cycle1)) / fact;
		Cycle1++;
	} while (pow(x, (2 * Cycle1)) / fact);
	return (int(ch / eps) * eps);
}
double func_sin(double x, double eps)
{
	double sin = 0;
	int Cycle1 = 1;
	int fact = 1;
	do
	{
		fact *= (2 * Cycle1);
		if (Cycle1 % 2 == 0)sin -= pow(x, (2 * Cycle1) - 1) / fact;	
		else sin += pow(x, (2 * Cycle1) - 1) / fact;
		Cycle1++;
	} while (pow(x, (2 * Cycle1) - 1) / fact);
	return (int(sin / eps) * eps);
}
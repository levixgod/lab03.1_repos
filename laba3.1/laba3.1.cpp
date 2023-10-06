// Laba3.1.cpp
// Nazarko Zakhar
// Лабораторна робота №3.1
// Розгалуження, задане формулою: функція однієї змінної
// Варіант №18
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; 
	double y; 
	double A; 
	double B; 
	double sin2;

	cout << "x = "; cin >> x;
	A = 13.5 - 2*x;
	sin2 = (1 - cos(2 * x)) / 2; //так як синус квадрат застусовується у виразах кілька раз вводим його в окрему змінну

	if (x <= -1)
		B = exp(0.4 + x);
	if (-1 < x && x < 1)
		B = 1 - sin2;
	if (x >= 1)
		B = cos(x) / ( 1 + sin2 );

	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;


	if (x <= -1)
		B = exp(0.4 + x);
	else
		if (x >= 1)
			B = cos(x) / (1 + sin2);
		else
			B = 1 - sin2;

	y = A - B;
	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}

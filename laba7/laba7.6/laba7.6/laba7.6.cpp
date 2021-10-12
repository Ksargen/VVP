#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{	
	setlocale(LC_ALL, "Rus");
	int a1, b1, c1, a2, b2, c2;
	cout << "Введите коэффиценты первого уравнения:\n";
	cin >> a1 >> b1 >> c1;
	cout << "Введите коэффиценты второго уравнения:\n";
	cin >> a2 >> b2 >> c2;
	int d, d1, d2;
	d = a1 * b2 - b1 * a2;
	d1 = c1 * b2 - b1 * c2;
	d2 = a1 * c2 - c1 * a2;
	float x, y;
	x = d1 / d;
	y = d2 / d;
	cout << "x = " << x << "\ny = " << y; 
}

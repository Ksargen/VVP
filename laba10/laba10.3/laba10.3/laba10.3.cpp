#include <iostream>
#include <math.h>
#include <locale.>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите координаты точки A: ";
	int Ax,Ay;
	cin >> Ax >> Ay;
	cout << "\nВведите координаты точки B: ";
	int Bx, By;
	cin >> Bx >> By;
	cout << "\nВведите координаты точки C: ";
	int Cx, Cy;
	cin >> Cx >> Cy;
	if (sqrt(pow(abs(Ax - Bx), 2) + pow(abs(Ay - By), 2)) > sqrt(pow(abs(Ax - Cx), 2) + pow(abs(Ay - Cy), 2))) {
		cout << "Длина AB: " << sqrt(pow(abs(Ax - Bx), 2) + pow(abs(Ay - By), 2));
		return 0;
	}
	else if (sqrt(pow(abs(Ax - Bx), 2) + pow(abs(Ay - By), 2)) < sqrt(pow(abs(Ax - Cx), 2) + pow(abs(Ay - Cy), 2))) {
		cout << "Длина АС: " << sqrt(pow(abs(Ax - Cx), 2) + pow(abs(Ay - Cy), 2));
		return 0;
	}
	else {
		cout << "Длины АВ и АС: " << sqrt(pow(abs(Ax - Cx), 2) + pow(abs(Ay - Cy), 2));
	}

	return 0;
}
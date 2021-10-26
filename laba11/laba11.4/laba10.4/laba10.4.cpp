#include <iostream>
#include <math.h>
#include <locale.>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите координаты точки A: ";
	int Ax, Ay;
	cin >> Ax >> Ay;
	if ((Ax > 0) and (Ay > 0)) {
		cout << "Точка в I четверти.";
	}
	else if ((Ax < 0) and (Ay > 0)) {
		cout << "Точка в II четверти.";
	}
	else if ((Ax < 0) and (Ay < 0)) {
		cout << "Точка в III четверти.";
	}
	else {
		cout << "Точка в IV четверти.";
	}
}
#include <pch.h>
#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdlib.h>


using namespace std;

int main()
{
	int x1, x2, x3, y1, y2, y3;
	setlocale(LC_ALL, "Rus");
	cout << "Введите координаты первого угла: ";
	cin >> x1 >> y1;
	cout << "Введите координаты второго угла: ";
	cin >> x2 >> y2;
	cout << "Введите координаты третьего угла: ";
	cin >> x3 >> y3;
	int first = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	int second = sqrt(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2));
	int third = sqrt(pow(abs(x3 - x2), 2) + pow(abs(y3 - y2), 2));
	float P = first + second + third;
	cout << "Периметр треугольника: " << P;
	float p = P / 2;
	float S = sqrt(p*(p - first)*(p - second)*(p - third));
	cout << "\nПлощадь треугольника: " << S;
	return 0;
}
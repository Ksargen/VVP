// laba5.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <pch.h>
#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdlib.h>


using namespace std;

int main()
{
	int x1, x2, y1, y2;
	setlocale(LC_ALL, "Rus");
	cout << "Введите координаты первого угла: ";
	cin >> x1 >> y1;
	cout << "Введите координаты второго угла угла: ";
	cin >> x2 >> y2;
	int x = abs(x1 - x2);
	int y = abs(y1 - y2);
	cout << "Площадь прямоугольника: " << x * y << "\nПериметр данного прямоугольика: " << 2 * (x + y);
	return 0;
}
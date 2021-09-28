#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{	
	setlocale(LC_ALL, "Rus");
	cout << "Введите координаты первой точки: ";
	int x1;
	int y1;
	cin >> x1 >> y1;
	cout << "\nВведите координаты второй точки: ";
	int x2;
	int y2;
	cin >> x2 >> y2;
	cout << "\nРасстояние между двумя точками: " << sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));

	return 0;
}
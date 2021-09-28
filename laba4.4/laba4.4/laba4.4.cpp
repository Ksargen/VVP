#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите 2 ненулевых числа:";
	int a;
	int b;
	cin >> a >> b;
	cout << "Сумма их квадратов: " << pow(a, 2) + pow(b, 2);
	cout << "\nРазность их квадратов: " << pow(a, 2) - pow(b, 2);
	cout << "\nПроизведение их квадратов: " << pow(a, 2) * pow(b, 2);
	cout << "\nЧастное первого квадрата от второго: " << pow(a, 2) / pow(b, 2);
	return 0;
}
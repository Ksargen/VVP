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
	cout << "Сумма их модулей " << abs(a) + abs(b);
	cout << "\nРазность их модулей: " << abs(a) - abs(b);
	cout << "\nПроизведение их модулей: " << abs(a) * abs(b);
	cout << "\nЧастное первого модуля от второго: " << abs(a) / abs(b);
	return 0;
}
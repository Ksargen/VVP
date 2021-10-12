#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{	
	setlocale(LC_ALL,"Rus");
	float x, y, a, z;
	cout << "Введите массу и цену купленных конфет, затем массу второй закупки:";
	cin >> x >> a >> y;
	z = a / x;
	cout <<"За один кг:" << z << "\nЗа " << y <<" кг: " << z*y; 
}

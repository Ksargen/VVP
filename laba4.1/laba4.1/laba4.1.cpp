
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int a;
    int b;
    setlocale(LC_ALL, "Rus");
    cout << "Введите стороны прямоугольника:";
    cin >> a >> b;
    cout << "Площадь прямоугольника: " << a * b;
    cout << "\nПериметр прямоуглольника:" << 2 * (a + b);
    return 0;
}

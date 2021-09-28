#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int b;
    int a;
    setlocale(LC_ALL, "Rus");
    cout << "Введите два числа:";
    cin >> b >> a;
    cout << "Среднее арифмитическое этих чисел: ";
    float c = (float)(a + b) / 2;
    cout << c;
    return 0;
}

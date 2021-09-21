
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{   
    float Pi = 3.14;
    int d;
    setlocale(LC_ALL, "Rus");
    cout << "Введите диаметр окружности:";
    cin >> d;
    cout << "Площадь окружности: " << Pi * d;
    return 0;
}

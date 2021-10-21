#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите размер файла в байтах: ";
    float a;
    cin >> a;
    cout << "Файл занимает " << ceil(a / 1024) << " целых килобайт.";
}

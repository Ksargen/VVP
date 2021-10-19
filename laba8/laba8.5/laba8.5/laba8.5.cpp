#include <locale.h>
#include <iostream>
using namespace std;

int main()
{
    int a, i;
    const int ArrSize = 3;
    setlocale(LC_ALL, "Rus");
    cout << "Введите трехзначное число: ";
    cin >> a;
    char number[ArrSize], invnumber[ArrSize];
    i = 0;
    while (a > 0) {
        number[i] = a % 10 + '0';
        a = a / 10;
        ++i;
    }
    swap(number[0], number[1]);
    for (i = 0; i < ArrSize; i++) {
        cout << number[i];
    }
}


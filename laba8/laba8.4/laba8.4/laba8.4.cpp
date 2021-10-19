#include <locale.h>
#include <iostream>
using namespace std;

int main()
{   
    int a, i;
    const int ArrSize = 3;
    setlocale(LC_ALL,"Rus");
    cout << "Введите двузначное число: ";
    cin >> a;
    char number[ArrSize];
    i = 0;
    while (a > 0) {
        number[i] = a % 10 +'0';
        a = a / 10;
        i++;
    }
    number[i] = '\0';
    for (i = 0; i < ArrSize; i++) {
        cout << number[i];
    }
}


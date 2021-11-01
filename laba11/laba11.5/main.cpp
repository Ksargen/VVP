#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "Введите число: ";
    int i;
    cin >> i;
    if (i == 0){
        cout << "Нулевое число";
        return 0;
    }
    if (i > 0){
        cout << "Положительное ";
    }
    else{
        cout << "Отрицательное ";
    }
    if (i % 2 == 0){
        cout << "четное число";
    }
    else{
        cout << "нечетное число";
    }

    return 0;
}

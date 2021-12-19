#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int a,b;
    char d;
    cout << "Введите исходное положение(N, W, S, E): ";
    cin >> d;
    switch (d){
        case 'N':
            a = 0;
            break;
        case 'W':
            a = 1;
            break;
        case 'S':
            a = 2;
            break;
        case 'E':
            a = 3;
            break;
    }
    cout << "Введите комманду(-1 - 1): ";
    cin >> b;
    switch (b){
    case 1:
        a++;
        break;
    case -1:
        a--;
        break;
    };
    float c = a;
    if (abs(c) == 4){a = 0;};
    switch (a){
    case 0:
        cout << "Север.";
        break;
    case 1:
        cout << "Запад.";
        break;
    case 2:
        cout << "Юг.";
        break;
    case 3:
        cout << "Восток.";
        break;
    case -1:
        cout << "Восток.";
        break;
    case -2:
        cout << "Юг.";
        break;
    case -3:
        cout << "Запад.";

    }

    return 0;
}

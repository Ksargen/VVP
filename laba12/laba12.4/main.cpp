#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int a,n1,n2,n3;
    cout << "Введите число в диапазоне (100-999): ";
    cin >> a;
    n1 = a / 100;
    n2 = (a % 100) / 10;
    n3 = (a % 100) % 10;
    switch (n1){
        case 1:
            cout << "Сто ";
            break;
        case 2:
            cout << "Двести ";
            break;
        case 3:
            cout << "Триста ";
            break;
        case 4:
            cout << "Четыреста ";
            break;
        case 5:
            cout << "Пятьсот ";
            break;
        case 6:
            cout << "Шестьсот ";
            break;
        case 7:
            cout << "Семьсот ";
            break;
        case 8:
            cout << "Восемсот ";
            break;
        case 9:
            cout << "Девятсот ";
            break;
    }
    if (((a % 100) >= 10) and ((a % 100) < 20)){
        switch (a % 100){
            case 11:
                cout << "одиннадцать";
                return 0;
            case 12:
                cout << "двенадцать";
                return 0;
            case 13:
                cout << "тринадцать";
                return 0;
            case 14:
                cout << "четырнадцать";
                return 0;
            case 15:
                cout << "пятнадцать";
                return 0;
            case 16:
                cout << "шестнадцать";
                return 0;
            case 17:
                cout << "семнадцать";
                return 0;
            case 18:
                cout << "восемнадцать";
                return 0;
            case 19:
                cout << "девятнадцать";
                return 0;
            case 10:
                cout << "десять";
                return 0;

        }
    }
    switch (n2){
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "пятьдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
        case 7:
            cout << "семьдесят ";
            break;
        case 8:
            cout << "восемьдесят ";
            break;
        case 9:
            cout << "девяносто ";
            break;
    }
    switch (n3){
        case 1:
            cout << "один";
            break;
        case 2:
            cout << "два";
            break;
        case 3:
            cout << "три";
            break;
        case 4:
            cout << "четрые";
            break;
        case 5:
            cout << "пять";
            break;
        case 6:
            cout << "шесть";
            break;
        case 7:
            cout << "семь";
            break;
        case 8:
            cout << "восемь";
            break;
        case 9:
            cout << "девять";
            break;
    }
    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int year,i;
    cout << "Введите год: ";
    cin >> year;
    year = year - 1984;
    i = (year % 60) % 12;
    switch (i){
    case 0:
        cout << "Год зеленой";
        break;
    case 1:
        cout << "Год красной";
        break;
    case 2:
        cout << "Год желтой";
        break;
    case 3:
        cout << "Год белый";
        break;
    case 4:
        cout << "Год черной";
        break;
    case -1:
        cout << "Год черной";
        break;
    case -2:
        cout << "Год белый";
        break;
    case -3:
        cout << "Год желтой";
        break;
    case -4:
        cout << "Год красной";
        break;
    }
    switch (year % 12){
    case 0:
        cout << " крысы";
        break;
    case 1:
        cout << " коровы";
        break;
    case 2:
        cout << " тигра";
        break;
    case 3:
        cout << " зайца";
        break;
    case 4:
        cout << " дракона";
        break;
    case 5:
        cout << " змеи";
        break;
    case 6:
        cout << " лошади";
        break;
    case 7:
        cout << " овцы";
        break;
    case 8:
        cout << " обезьяны";
        break;
    case 9:
        cout << " курицы";
        break;
    case 10:
        cout << " собаки";
        break;
    case 11:
        cout << " свиньи";
        break;
    case -1:
        cout << " свиньи";
        break;
    case -2:
        cout << " собаки";
        break;
    case -3:
        cout << " курицы";
        break;
    case -4:
        cout << " обезьяны";
        break;
    case -5:
        cout << " овцы";
        break;
    case -6:
        cout << " лошади";
        break;
    case -7:
        cout << " змеи";
        break;
    case -8:
        cout << " дракона";
        break;
    case -9:
        cout << " зайца";
        break;
    case -10:
        cout << " тигра";
        break;
    case -11:
        cout << " коровы";
        break;
    }
    return 0;
}

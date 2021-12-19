#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int a,b;
    cout << "Введите число (1-31): ";
    cin >> a;
    cout << "Введите номер месяца(1-12): ";
    cin >> b;
    switch (a){
        case 1:{
            cout << "Первое ";
            break;
        }
        case 2:{
            cout << "Второе ";
            break;
        }
        case 3:{
            cout << "Третье ";
            break;
        }
        case 4:{
            cout << "Четвертое ";
            break;
        }
        case 5:{
            cout << "Пятое ";
            break;
        }
        case 6:{
            cout << "Шестое ";
            break;
        }
        case 7:{
            cout << "Седьмое ";
            break;
        }
        case 8:{
            cout << "Восьмое ";
            break;
        }
        case 9:{
            cout << "Девятое ";
            break;
        }
        case 10:{
            cout << "Десятое ";
            break;
        }
        case 11:{
            cout << "Одиннадцатое ";
            break;
        }
        case 12:{
            cout << "Двенадцатое ";
            break;
        }
        case 13:{
            cout << "Тринадцатое ";
            break;
        }
        case 14:{
            cout << "Четырнадцатое ";
            break;
        }
        case 15:{
            cout << "Пятнадцатое ";
            break;
        }
        case 16:{
            cout << "Шестнадцатое ";
            break;
        }
        case 17:{
            cout << "Семнадцатое ";
            break;
        }
        case 18:{
            cout << "Восемнадцатое ";
            break;
        }
        case 19:{
            cout << "Девятнадцатое ";
            break;
        }
        case 20:{
            cout << "Двадцатое ";
            break;
        }
        case 21:{
            cout << "Двадцать первое ";
            break;
        }
        case 22:{
            cout << "Двадцать второе ";
            break;
        }
        case 23:{
            cout << "Двадцать третье ";
            break;
        }
        case 24:{
            cout << "Двацать четвертое ";
            break;
        }
        case 25:{
            cout << "Двацать пятое ";
            break;
        }
        case 26:{
            cout << "Двацать шестое ";
            break;
        }
        case 27:{
            cout << "Двацать седьмое ";
            break;
        }
        case 28:{
            cout << "Двацать восьмое ";
            break;
        }
        case 29:{
            cout << "Двацать девятое ";
            break;
        }
        case 30:{
            cout << "Тридцатое ";
            break;
        }
        case 31:{
            cout << "Тридцать первое ";
            break;
        }
    }
    switch (b){
        case 1:
            cout << "января";
            break;
        case 2:
            cout << "февраля";
            break;
        case 3:
            cout << "марта";
            break;
        case 4:
            cout << "апреля";
            break;
        case 5:
            cout << "мая";
            break;
        case 6:
            cout << "июня";
            break;
        case 7:
            cout << "июля";
            break;
        case 8:
            cout << "августа";
            break;
        case 9:
            cout << "сентября";
            break;
        case 10:
            cout << "октября";
            break;
        case 11:
            cout << "ноября";
            break;
        case 12:
            cout << "декабря";
            break;
    }
    return 0;
}

#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "Введите целое число, лежащее в диапазоне 1–999: ";
    int i,a;
    cin >> i;
    if (i == 0){
        cout << "Нулевое число.";
        return 0;
    }
    if (i % 2 == 0){
        cout << "Четное ";
    }
    else{
        cout << "Нечетное ";
    }
    if (i > 0){
        while (i > 0){
            i = i / 10;
            a++;
        }
    }
    else{
        while (i < 0){
            i = i / 10;
            a++;
    }
    }
    if (a == 3){
        cout << "трехзначное число.";
    }
    else if(a == 2){
        cout << "двузначное число.";
    }
    else{
        cout << "однозначное число.";
    }
    return 0;
}

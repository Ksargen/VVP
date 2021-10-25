#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "Введите трехзначное число: ";
    int a,x,y,z;
    cin >> a;
    x = a / 100;
    y =(a % 100) / 10;
    z = a % 10;
    if (((x < y) and (y < z)) or ((x > y) and (y > z))){
        cout << "Цифры данного числа образуют возрастающую или убывающую последовательность";
        return 0;
    }
    cout << "Цифры данного числа не образуют возрастающую или убывающую последовательность";
    return 0;
}

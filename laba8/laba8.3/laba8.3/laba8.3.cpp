#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
        setlocale(LC_ALL, "Rus");
        int a, b;
        cout << "Введите длину отрезка А, а затем длину Б: ";
        cin >> a >> b;
        int c;
        c = a / b;
        cout << a-b*c << " см свободного места в отрезке А.";
}


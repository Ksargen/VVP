#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "¬ведите четырехзначное число: ";
    int a,w,x,y,z;
    cin >> a;
    w = a / 1000;
    x = (a / 100) % 10;
    y =(a / 10) % 10;
    z = a % 10;
    if ((w == z) and (x == y)){
        cout << "ƒанное число читаетс€ одинаково слева направо и справа налево";
        return 0;
    }
    cout << "ƒанное число не читаетс€ одинаково слева направо и справа налево";
    return 0;
}

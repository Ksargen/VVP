#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "¬ведите 2 числа: ";
    int a,b,i;
    cin >> a >> b;
    if (b > a){
        i = a;
        a = b;
        b = i;
    }
    while (a != b){
        a = a - b;
        if (b > a){
            i = a;
            a = b;
            b = i;
            }
    }
    cout << b;
    return 0;
}

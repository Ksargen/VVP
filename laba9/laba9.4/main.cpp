#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "Введите A, B, C: ";
    int A,B,C;
    cin >> A >> B >> C;
    if ((C > B) or (C > A)){
            cout << "В прямоугольнике со сторонами А и В может поместиться столько целых квадратов со стороной С: 0\n";
            return 0;
        }
    cout << "В прямоугольнике со сторонами А и В может поместиться столько целых квадратов со стороной С: " << floor(A*B/pow(C,2));

    return 0;
}

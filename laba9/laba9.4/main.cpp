#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� A, B, C: ";
    int A,B,C,d,e;
    cin >> A >> B >> C;
    d = floor(A/C);
    e = floor(B/C);
    if ((e == 0) or (d == 0)){
        cout << "������ ������� �� ���������.";
    }
    cout << "���-�� ������� ���������: " <<d*e;
    cout << "\n��������� �������: " << A*B-d*e*pow(C,2);


    return 0;
}

#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� A, B, C: ";
    int A,B,C;
    cin >> A >> B >> C;
    if ((C > B) or (C > A)){
            cout << "� �������������� �� ��������� � � � ����� ����������� ������� ����� ��������� �� �������� �: 0\n";
            return 0;
        }
    cout << "� �������������� �� ��������� � � � ����� ����������� ������� ����� ��������� �� �������� �: " << floor(A*B/pow(C,2));

    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� �������������� �����: ";
    int a,w,x,y,z;
    cin >> a;
    w = a / 1000;
    x = (a / 100) % 10;
    y =(a / 10) % 10;
    z = a % 10;
    if ((w == z) and (x == y)){
        cout << "������ ����� �������� ��������� ����� ������� � ������ ������";
        return 0;
    }
    cout << "������ ����� �� �������� ��������� ����� ������� � ������ ������";
    return 0;
}

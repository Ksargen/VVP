#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� ����������� �����: ";
    int a,x,y,z;
    cin >> a;
    x = a / 100;
    y =(a % 100) / 10;
    z = a % 10;
    if (((x < y) and (y < z)) or ((x > y) and (y > z))){
        cout << "����� ������� ����� �������� ������������ ��� ��������� ������������������";
        return 0;
    }
    cout << "����� ������� ����� �� �������� ������������ ��� ��������� ������������������";
    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� �����: ";
    int a;
    cin >> a;
    if ((a % 2 == 0) && (a >= 10) && (a < 100)){
        cout << "����� ������ � ����������.";
        return 0;
    }
    cout << "����� �� ��������.";
    return 0;
}

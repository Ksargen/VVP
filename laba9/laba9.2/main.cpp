#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� ����� ���: ";
    int K;
    cin >> K;
    cout << "���� ������ � ���� ���� - " << K % 7;
    return 0;
}

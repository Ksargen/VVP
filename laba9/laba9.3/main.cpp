#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� ����� ��� � ��������� 1-365: ";
    int K,N;
    cin >> K;
    cout << "������� ����� ��� � ��������� 1-7: ";
    cin >> N;
    cout << "���� ������ � ���� ���� - " << K % 7 + N - 1;
    return 0;
}

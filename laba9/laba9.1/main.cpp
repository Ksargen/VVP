#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "������� ���-�� ������: " << endl;
    int N, k;
    cin >> N;
    k = N / 60;
    cout << "������ " << N - k*60 << " ����� ������ � ������ ������.";
    return 0;
}

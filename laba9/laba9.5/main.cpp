#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� ���: ";
    int k;
    cin >> k;
    cout << "��� " << (k - 1) / 100 + 1 <<" ���.";
    return 0;
}

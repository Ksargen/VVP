#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� ���: ";
    int k;
    cin >> k;
    if (k == 0){
        cout << "��������� ���� https://ru.wikipedia.org/wiki/0_���";
        return 0;
    }
    if (k < 0){
        cout << "��� " << (k + 1) / 100 - 1 <<" ���.";
        return 0;
    }
    cout << "��� " << (k - 1) / 100 + 1 <<" ���.";
    return 0;
}

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� ���: ";
    int k;
    cin >> k;
    if (k % 10 == 0){
        cout << "��� " << k / 100 <<" ���.";
        return 0;
    }
    cout << "��� " << k / 100 + 1 <<" ���.";
    return 0;
}

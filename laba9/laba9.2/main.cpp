#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "¬ведите номер дн€: ";
    int K;
    cin >> K;
    cout << "ƒень недели в этот день - " << K % 7;
    return 0;
}

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "¬ведите номер дн€ в диапозоне 1-365: ";
    int K,N;
    cin >> K;
    cout << "¬ведите номер дн€ в диапозоне 1-7: ";
    cin >> N;
    cout << "ƒень недели в этот день - " << K % 7 + N - 1;
    return 0;
}

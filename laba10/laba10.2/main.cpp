#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "Введите A, B и С: ";
    int A,B,C;
    cin >> A >> B >> C;
    if ((A < B) && (B < C)){
        cout << "Двойное неравенство A < B < C справедливо";
        return 0;
    }
    cout << "Двойное неравенство A < B < C несправедливо";
    return 0;
}

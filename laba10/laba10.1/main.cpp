#include <iostream>
#include <locale.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите А и В: ";
    int A,B;
    cin >> A >> B;
    if ((A > 2) && (B <= 3)){
        cout << "Высказывание A > 2 и B ≤ 3 истинно.";
        return 0;
    }
    cout << "Высказывание A > 2 и B ≤ 3 ложно";
    return 0;
}

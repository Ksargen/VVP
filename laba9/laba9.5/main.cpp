#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "¬видете год: ";
    int k;
    cin >> k;
    if (k == 0){
        cout << "нормально пиши https://ru.wikipedia.org/wiki/0_год";
        return 0;
    }
    if (k < 0){
        cout << "Ёто " << (k + 1) / 100 - 1 <<" век.";
        return 0;
    }
    cout << "Ёто " << (k - 1) / 100 + 1 <<" век.";
    return 0;
}

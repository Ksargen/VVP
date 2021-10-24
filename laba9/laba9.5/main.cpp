#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "¬видете год: ";
    int k;
    cin >> k;
    if (k % 10 == 0){
        cout << "Ёто " << k / 100 <<" век.";
        return 0;
    }
    cout << "Ёто " << k / 100 + 1 <<" век.";
    return 0;
}

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "¬видете год: ";
    int k;
    cin >> k;
    cout << "Ёто " << (k - 1) / 100 + 1 <<" век.";
    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "¬ведите число: ";
    int a,b,i;
    b = 0;
    cin >> a;
    for (i = 0; b < a; i++){
        b += i;
    }
    cout << i-1;
    return 0;
}

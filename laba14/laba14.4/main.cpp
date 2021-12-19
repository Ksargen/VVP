#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "¬ведите число: ";
    float b;
    int i;
    int a = 1000;
    cin >> b;
    b = b / 100;
    for(i = 0; a <= 1100; i++){
        a = a + (a * b);
    }
    cout << i <<" " << a;
    return 0;
}

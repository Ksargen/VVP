#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "¬ведите число: ";
    int a;
    cin >> a;
    if ((a % 2 == 0) && (a >= 10) && (a < 100)){
        cout << "„исло четное и двузначное.";
        return 0;
    }
    cout << "„исло не подходит.";
    return 0;
}

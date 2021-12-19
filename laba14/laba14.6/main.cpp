#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "¬ведите число: ";
    int a,i,ilast,buff, k;
    cin >> a;
    i = 1;
    ilast = 0;
    k = 2;
    while(i < a){
        buff = i;
        i = i + ilast;
        ilast = buff;
        k++;
    }
    cout << k;
    return 0;
}

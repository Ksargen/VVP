#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    float N,A,a;
    int i,k;
    cout << "¬ведите числа: ";
    cin >> N >> A;
    a = 0;
    k = 1;
    for(i = 0; i <= N; i++){
        a = a + (pow(A,i)*k);
        k = k*-1;
        cout << a << " ";
    }
    cout << "\n" << a;
    return 0;
}

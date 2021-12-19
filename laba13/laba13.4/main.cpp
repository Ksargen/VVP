#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    float N,A,i,a;
    cout << "¬ведите числа: ";
    cin >> N >> A;
    a = 0;
    for(i = 0; i <= N; i++){
        a = a + pow(A,i);
        cout << a << " ";
    }
    cout << "\n" << a;
    return 0;
}

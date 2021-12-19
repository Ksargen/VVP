#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    float N,i,a;
    cout << "¬ведите число: ";
    cin >> N;
    a = 0;
    for(i = 1; i <= N; i++){
        a = a + 2*i-1;
        cout << a << " ";
    }
    return 0;
}


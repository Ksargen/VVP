#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    float N,i,a;
    cout << "¬ведите число: ";
    cin >> N;
    a = 1;
    for(i = 1.1; i <= N; i = i+0.1){
        a = i * a;
    }
    cout << a;
    return 0;
}


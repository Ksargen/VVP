#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    float N,i;
    cout << "¬ведите цену: ";
    cin >> N;
    for(i = 0.1; i < 1.1; i = i+0.1){
        cout << N * i;
        cout << endl;
    }
    return 0;
}

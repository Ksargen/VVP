#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите кол-во секунд: " << endl;
    int N, k;
    cin >> N;
    k = N / 60;
    cout << "Прошло " << N - k*60 << " целых секунд с полной минуты.";
    return 0;
}

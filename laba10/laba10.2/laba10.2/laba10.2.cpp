#include <locale>
#include <iostream>

using namespace std;

int main()
{   
    setlocale(LC_ALL,"Rus");
    cout << "Введите три числа: \n";
    int i, step,buff;
    const float k = 1.247;
    const int arraySize = 3;
    int arr[arraySize];
    for (int i = 0; i < arraySize; i++) {
        cin >> arr[i];
    }
    for (step = arraySize - 1; step >= 1; step /= k) {
        for (i = 0; i < arraySize - step; i++) {
            if (arr[i] < arr[i + step]) {
                buff = arr[i];
                arr[i] = arr[i + step];
                arr[i + step] = buff;
            }
        }
    }
    cout << "Сумма двух наибольших чисел: " << arr[0] + arr[1];
}
#include <stdio.h>
#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
 setlocale(LC_ALL,"Rus");
 int i, buff, step;
 const int arraySize = 3;
 const float k = 1.247;
 int arr[arraySize];
 cout << "Введите длины сторон треугольника: ";
 for (int i = 0; i < arraySize; i++){
  cin >> arr[i];
 }
 cout << endl;
 for (step = arraySize - 1; step >= 1; step /= k) {
    for (i = 0; i < arraySize - step; i++) {
        if (arr[i] < arr[i + step]) {
                buff = arr[i];
                arr[i] = arr[i + step];
                arr[i + step] = buff;
                }
        }
 }
 if (arr[0] < (arr[1] + arr[2])){
    cout << "Треугольник существует.";
    return 0;
 }
 cout << "Треугольник не существует. Ты дебил.";
 return 0;
}

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите размер файла в байтах: ";
    int a;
    cin >> a;
    if (a % 1024 > 0) {
    cout << "Файл занимает " << a / 1024 << " целых килобайт.";
    }
    
}
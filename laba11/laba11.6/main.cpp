#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� ����� �����, ������� � ��������� 1�999: ";
    int i,a;
    cin >> i;
    if (i == 0){
        cout << "������� �����.";
        return 0;
    }
    if (i % 2 == 0){
        cout << "������ ";
    }
    else{
        cout << "�������� ";
    }
    if (i > 0){
        while (i > 0){
            i = i / 10;
            a++;
        }
    }
    else{
        while (i < 0){
            i = i / 10;
            a++;
    }
    }
    if (a == 3){
        cout << "����������� �����.";
    }
    else if(a == 2){
        cout << "���������� �����.";
    }
    else{
        cout << "����������� �����.";
    }
    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int a,b;
    char d;
    cout << "������� �������� ���������(N, W, S, E): ";
    cin >> d;
    switch (d){
        case 'N':
            a = 0;
            break;
        case 'W':
            a = 1;
            break;
        case 'S':
            a = 2;
            break;
        case 'E':
            a = 3;
            break;
    }
    cout << "������� ��������(-1 - 1): ";
    cin >> b;
    switch (b){
    case 1:
        a++;
        break;
    case -1:
        a--;
        break;
    };
    float c = a;
    if (abs(c) == 4){a = 0;};
    switch (a){
    case 0:
        cout << "�����.";
        break;
    case 1:
        cout << "�����.";
        break;
    case 2:
        cout << "��.";
        break;
    case 3:
        cout << "������.";
        break;
    case -1:
        cout << "������.";
        break;
    case -2:
        cout << "��.";
        break;
    case -3:
        cout << "�����.";

    }

    return 0;
}

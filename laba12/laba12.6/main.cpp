#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int year,i;
    cout << "������� ���: ";
    cin >> year;
    year = year - 1984;
    i = (year % 60) % 12;
    switch (i){
    case 0:
        cout << "��� �������";
        break;
    case 1:
        cout << "��� �������";
        break;
    case 2:
        cout << "��� ������";
        break;
    case 3:
        cout << "��� �����";
        break;
    case 4:
        cout << "��� ������";
        break;
    case -1:
        cout << "��� ������";
        break;
    case -2:
        cout << "��� �����";
        break;
    case -3:
        cout << "��� ������";
        break;
    case -4:
        cout << "��� �������";
        break;
    }
    switch (year % 12){
    case 0:
        cout << " �����";
        break;
    case 1:
        cout << " ������";
        break;
    case 2:
        cout << " �����";
        break;
    case 3:
        cout << " �����";
        break;
    case 4:
        cout << " �������";
        break;
    case 5:
        cout << " ����";
        break;
    case 6:
        cout << " ������";
        break;
    case 7:
        cout << " ����";
        break;
    case 8:
        cout << " ��������";
        break;
    case 9:
        cout << " ������";
        break;
    case 10:
        cout << " ������";
        break;
    case 11:
        cout << " ������";
        break;
    case -1:
        cout << " ������";
        break;
    case -2:
        cout << " ������";
        break;
    case -3:
        cout << " ������";
        break;
    case -4:
        cout << " ��������";
        break;
    case -5:
        cout << " ����";
        break;
    case -6:
        cout << " ������";
        break;
    case -7:
        cout << " ����";
        break;
    case -8:
        cout << " �������";
        break;
    case -9:
        cout << " �����";
        break;
    case -10:
        cout << " �����";
        break;
    case -11:
        cout << " ������";
        break;
    }
    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int a,n1,n2,n3;
    cout << "������� ����� � ��������� (100-999): ";
    cin >> a;
    n1 = a / 100;
    n2 = (a % 100) / 10;
    n3 = (a % 100) % 10;
    switch (n1){
        case 1:
            cout << "��� ";
            break;
        case 2:
            cout << "������ ";
            break;
        case 3:
            cout << "������ ";
            break;
        case 4:
            cout << "��������� ";
            break;
        case 5:
            cout << "������� ";
            break;
        case 6:
            cout << "�������� ";
            break;
        case 7:
            cout << "������� ";
            break;
        case 8:
            cout << "�������� ";
            break;
        case 9:
            cout << "�������� ";
            break;
    }
    if (((a % 100) >= 10) and ((a % 100) < 20)){
        switch (a % 100){
            case 11:
                cout << "�����������";
                return 0;
            case 12:
                cout << "����������";
                return 0;
            case 13:
                cout << "����������";
                return 0;
            case 14:
                cout << "������������";
                return 0;
            case 15:
                cout << "����������";
                return 0;
            case 16:
                cout << "�����������";
                return 0;
            case 17:
                cout << "����������";
                return 0;
            case 18:
                cout << "������������";
                return 0;
            case 19:
                cout << "������������";
                return 0;
            case 10:
                cout << "������";
                return 0;

        }
    }
    switch (n2){
        case 2:
            cout << "�������� ";
            break;
        case 3:
            cout << "�������� ";
            break;
        case 4:
            cout << "����� ";
            break;
        case 5:
            cout << "��������� ";
            break;
        case 6:
            cout << "���������� ";
            break;
        case 7:
            cout << "��������� ";
            break;
        case 8:
            cout << "����������� ";
            break;
        case 9:
            cout << "��������� ";
            break;
    }
    switch (n3){
        case 1:
            cout << "����";
            break;
        case 2:
            cout << "���";
            break;
        case 3:
            cout << "���";
            break;
        case 4:
            cout << "������";
            break;
        case 5:
            cout << "����";
            break;
        case 6:
            cout << "�����";
            break;
        case 7:
            cout << "����";
            break;
        case 8:
            cout << "������";
            break;
        case 9:
            cout << "������";
            break;
    }
    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� �����: ";
    int i;
    cin >> i;
    if (i == 0){
        cout << "������� �����";
        return 0;
    }
    if (i > 0){
        cout << "������������� ";
    }
    else{
        cout << "������������� ";
    }
    if (i % 2 == 0){
        cout << "������ �����";
    }
    else{
        cout << "�������� �����";
    }

    return 0;
}

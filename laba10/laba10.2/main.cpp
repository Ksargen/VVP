#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� A, B � �: ";
    int A,B,C;
    cin >> A >> B >> C;
    if ((A < B) && (B < C)){
        cout << "������� ����������� A < B < C �����������";
        return 0;
    }
    cout << "������� ����������� A < B < C �������������";
    return 0;
}

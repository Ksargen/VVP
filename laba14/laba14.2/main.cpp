#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� 2 �����: ";
    int a,b;
    int i = 0;
    cin >> a >> b;
    int bc = b;
    while(bc <= a){
        i++;
        bc += b;
    }
    cout << i;
    return 0;
}

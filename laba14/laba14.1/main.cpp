#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    cout << "������� 2 �����: ";
    int a,b;
    cin >> a >> b;
    while(a <= b){
        for(int i = 0;i < a;i++){
            cout << a << " ";
        }
        cout << endl;
        a++;
    }
    return 0;
}

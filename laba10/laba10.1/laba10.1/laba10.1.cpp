#include <iostream>
#include <locale>

using namespace std;

int main()
{   
    setlocale(LC_ALL,"Rus");
    cout << "Введите А и В: ";
    int A, B;
    cin >> A >> B;
    if (A != B) {
        A = max(A, B);
        B = max(A, B);
        cout << "А и В: " << A << " " << B;
        return 0;
    }
    A = 0;
    B = 0;
    cout << "А и В: " << A << " " << B;
    return 0;
}
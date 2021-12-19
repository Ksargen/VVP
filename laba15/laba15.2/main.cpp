#include <iostream>

using namespace std;

int sign(float a){
    if (a < 0){
        return -1;
    }
    if (a == 0){
        return 0;
    }
    if (a > 0){
        return 1;
    }
}
int main()
{
    float A,B;
    cin >> A >> B;
    cout << sign(A)+sign(B);
}

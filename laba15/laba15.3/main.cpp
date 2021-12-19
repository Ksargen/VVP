#include <iostream>

using namespace std;

float RingS(float R1, float R2){
    float a = (R1*R1*3.14)-(R2*R2*3.14);
    return a;
}
int main()
{
    float R1, R2;
    cin >> R1 >> R2;
    float a = RingS(R1,R2);
    cout << a;
}

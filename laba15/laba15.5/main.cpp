#include <iostream>

using namespace std;

float Fact2(int N){
    float a = 1;
    if (N % 2 == 0){
        for(int i = 2; i <= N; i = i + 2){
            a = a*i;
        }
        return a;
    }
    else{
        for(int i = 1; i <= N; i = i + 2){
            a = a*i;
        }
        return a;
    }
}
int main()
{
    int N;
    cin >> N;
    cout << Fact2(N);
    return 0;
}

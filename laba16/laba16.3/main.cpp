#include <iostream>

using namespace std;

int main()
{
    int N,A,B,c;
    cin >> N >> A >> B;
    int arr[N];

    arr[0] = A;
    arr[1] = B;
    c = A;
    for (int i = 2; i < N;i++){
        c = c + arr[i - 1];
        arr[i] = c;
    }


    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    cin >> arr[0];
    int D,Db;
    cin >> D;
    Db = D;
    int k = 1;
    for (int i = 1; i < N; i++){
        arr[i] = 0;
    }

    for (int i = 1; i < N; i++){
        arr[i] = arr[0] * Db;
        Db = Db * D;

    }

    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

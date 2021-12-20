#include <iostream>

using namespace std;

int main()
{
    int N;
    int i = 0;
    cin >> N;
    int arr[N];
    for (i = 0; i < N; i++){
        arr[i] = i;
    }

    for (i = 0; i < N/2; i++){
        cout << arr[i] << " ";
        cout << arr[N - i - 1] << " ";
    }
    if (N % 2 != 0){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

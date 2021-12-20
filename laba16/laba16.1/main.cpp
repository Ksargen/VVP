#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    int k = 1;
    for (int i = 0; i < N; i++){
        arr[i] = 0;
    }
     for (int i = 0; i < N; i++){
        arr[i] = k;
        k = k + 2;
        if (k > 5){
            break;
        }
    }

    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

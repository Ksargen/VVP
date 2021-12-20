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
    for (i = 0; i < N; i = i + 2){
        cout << arr[i] << " ";
    }
    for (i = 1; i < N; i = i + 2){
        cout << arr[i] << " ";
    }
    return 0;
}

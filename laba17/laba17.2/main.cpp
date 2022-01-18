#include <iostream>
#include <locale>

using namespace std;

void printArray(int arr[], int arraySize){
    for(int i = 0; i < arraySize;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void fillArray (int arr[], int arraySize){
    for(int i = 0; i < arraySize;i++){
        arr[i] = rand() % 10;
    }
}
int main() {
    int N,K;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N;i++){
        cin >> arr[i];
    }
    printArray(arr,N);
    K = arr[1] - arr[0];
    for (int i = 0; i < N - 1; i++)
        if (arr[i] + K != arr[i+1]){
            cout << "0";
            return 0;
        }
    cout << K;
    return 0;
}

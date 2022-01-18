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
    int N,K,L;
    cin >> N >> K >> L;
    int arr[N];
    fillArray(arr,N);
    printArray(arr,N);
    float a = 0;
    float b = L - K + 1;
    for(int i = K; i <= L; i++){
        a = a + arr[i];
    }
    cout << a / b;
    return 0;
}

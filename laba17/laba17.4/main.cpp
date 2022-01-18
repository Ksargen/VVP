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
    int N;
    cin >> N;
    int arr[N];
    int Max;
    fillArray(arr,N);
    printArray(arr,N);
    for(int i = 1; i <= N-1;i++){
        if ((arr[i] > arr[i + 1]) and (arr[i] > arr[i - 1])){
            Max = arr[i];
        }
    }
    cout << Max;
    }

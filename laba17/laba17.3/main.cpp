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
    int Min;
    fillArray(arr,N);
    printArray(arr,N);
    for(int i = 0; i <= N;i = i + 2){
        if (arr[i] < Min){
            Min = arr[i];
        }
    }
    cout << Min;
    }

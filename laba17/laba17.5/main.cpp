#include <iostream>
#include <locale>

using namespace std;

void printArray(int arr[], int arraySize){
    for(int i = 0; i < arraySize;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int Min;
    printArray(arr,N);
    for(int i = 0; i <= N;i++){
        for(int j = 0; j <= N;j++){
            if ((i != j) and (arr[i] == arr[j])){
                if (i > j){
                    cout << i << " " << j;
                }
                else{
                    cout << j << " " << i;
                }
                return 0;
            }
        }

    }
    cout << Min;
    }

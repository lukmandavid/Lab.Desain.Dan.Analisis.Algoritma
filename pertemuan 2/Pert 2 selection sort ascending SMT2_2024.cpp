#include <iostream>
using namespace std;


void selectionSortAsc(int arr[], int arraySize){
    int LastMintValueIndex;
    int temp;

    for (int i = 0; i < arraySize - 1; i++) {
        int minimimumValue = arr [i];
        for (int j = i + 1; j < arraySize; i++){
            if ( arr[j] < minimimumValue) {
                minimimumValue = arr[j];
                LastMintValueIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = minimimumValue;
        arr[LastMintValueIndex] - temp;
        cout << "\nInterasi Ke-" << i + 1 << ": ";
        for(int i = 0; i < arraySize; i++){
            cout << arr[i] << " ";
        }
    }
    cout << "\nData Setelah Sorting: ";
    for(int i = 0; i < arraySize; i++){
        cout << arr[i] << " ";
    }
}

 
int main() {
    int arraySize;

    cout << "Masukkan Jumlah Elemen: "; cin >> arraySize;
    int arr[arraySize];
    cout << "\n";
    for (int i = 0; i < arraySize; i++){
        cout << "Masukkan Nilai Element: "; cin >> arr[i];
    }
    cout << "\nData Sebelum Sorting: ";
    for(int i = 0; i < arraySize; i++) {
        cout << arr[i] <<" ";
    }

    selectionSortAsc(arr, arraySize);
}
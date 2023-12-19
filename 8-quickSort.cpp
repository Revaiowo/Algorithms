#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int low, int high){

    int pivot = arr[high];
    int j = low, i = low-1;

    for (j; j<high; j++){

        if (arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){

    if (low < high){

        int res = partition(arr, low, high);

        quickSort(arr, low, res-1);
        quickSort(arr, res+1, high);
    }
}

void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int size = 10;
    int arr[size] = {5,3,77,2,8,4,92,47,22,37};

    displayArray(arr, size);
    quickSort(arr, 0, size-1);
    displayArray(arr, size);

    return 0;


}
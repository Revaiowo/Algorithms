#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int arr[], int size){

    for (int i=1; i <size; i++){

        int key = arr[i];
        int j = i-1;

        while (j>=0 && arr[j] > key){
            
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void traverse(int arr[], int size){

    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {3,6,2,7,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    traverse(arr, size);
    insertionSort(arr, size);
    traverse(arr, size);

    return 0;
}
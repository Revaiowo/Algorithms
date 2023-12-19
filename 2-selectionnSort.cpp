#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int size){

    for (int i=0; i < size-1; i++){

        int min = i;

        for (int j=i+1; j< size; j++){

            if (arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
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
    selectionSort(arr, size);
    traverse(arr, size);

    return 0;
}
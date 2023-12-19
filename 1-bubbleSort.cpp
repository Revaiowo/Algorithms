#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int size){

    for (int i=0; i<size-1; i++){

        for (int j=0; j<size-i-1; j++){

            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout<<endl;
}

void traverse(int arr[], int size){

    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {5,2,6,1,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    traverse(arr, size);
    bubbleSort(arr, size);
    traverse(arr, size);

    return 0;
}
#include <iostream>
using namespace std;

const int size = 10;

void merge(int arr[], int left, int mid, int right){

    int size1 = mid - left + 1;
    int size2 = right - mid;

    int* leftArray = new int[size1];
    int* rightArray = new int[size2];

    for (int i=0; i<size1; i++){
        leftArray[i] = arr[left + i]; 
    }
    for (int j=0; j<size2; j++){
        rightArray[j] = arr[mid + 1 +j];
    }

    int i=0, j=0, k=left;

    while (i<size1 && j<size2){

        if (leftArray[i] <= rightArray[j]){
            arr[k++] = leftArray[i++];
        }
        else{
            arr[k++] = rightArray[j++];
        }
    }

    while (i<size1){
         arr[k++] = leftArray[i++];
    }
    while (j<size2){
         arr[k++] = rightArray[j++];
    }

    delete[] leftArray; delete[] rightArray;
}

void mergeSort(int arr[], int left, int right){

    if (left < right){

        int mid = left + (right-left) /2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main(){

    int arr[size] = {5,3,77,2,8,4,92,47,22,37};

    displayArray(arr, size);
    mergeSort(arr, 0, size-1);
    displayArray(arr, size);

    return 0;


}
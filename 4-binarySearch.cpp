#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int size){

    int left = 0;
    int right = size-1;

    while (right >= left){

        int mid = left + (right - left)/2;

        if (arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    const int size = 7;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7};
    int target = 45;

    int result = binarySearch(arr, target, size);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
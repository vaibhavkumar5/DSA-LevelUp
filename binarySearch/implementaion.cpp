#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int mid = start/2 + end/2;

     while (start <= end){
        int midElement = arr[mid];

        if (midElement == target){
            return mid;
        }
        if (target < midElement){
            end = mid - 1;
        } else {
            start = mid +1;
        }
         

        mid = start/2 + end/2;
    }
    return -1;
}

int main() {
    
    int arr[] = {2,4,6,8,9,11,23};
    int size = 7;
    int target = 2;

   cout << binarySearch(arr, size, target) <<endl;
    

    return 0;
}     
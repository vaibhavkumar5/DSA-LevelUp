#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end- start)/2;
    int ans = -1;

    while (start <= end){
        int midElement = arr[mid];
        if (midElement == target){
            ans = mid;
            end = mid -1 ;
        }
        else if (target < midElement){
            end = mid - 1;
        } else   {
            start = mid +1;
        }
         

        mid = start + (end- start)/2; 
    }
    return ans;
}
int main() {
    
    int arr[] = {2,3,3,3,4,7,9};
    int size = 7;
    int target = 3;

   cout << firstOcc(arr, size, target) <<endl;
    

    return 0;
}     
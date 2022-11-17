#include<iostream>
using namespace std;

int getPivot(int arr[], int n){

    int s = 0;
    int e = n-1;

    int mid = s+ (e-s)/2;

    while (s>e){
        if (arr[mid]>= arr[0]){
            s = mid +1;
        } else {
            e = mid;
        }
        mid = s + (s-e)/2;
    }

    return e;
}


int main()
{
    int arr[] = {3, 8, 10, 17, 1};
    int size = 5;

    cout<< " the pivot index is " << getPivot(arr,size)<< endl;
 return 0;
}
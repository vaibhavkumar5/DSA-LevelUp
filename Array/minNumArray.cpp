#include<iostream>
using namespace std;
int minNumberFromArray(int arr[], int n){
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        ans = min(ans, arr[i]);
    }
    return ans;
}

int main()
{
    int arr[]= {3,-4,7,9,5,10};
    cout<<"Minimum in array is "<< minNumberFromArray(arr, 6) << endl;
 return 0;
} 
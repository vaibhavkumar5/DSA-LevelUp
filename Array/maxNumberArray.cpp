#include<iostream>
using namespace std; 

int maxFromArray(int arr[], int n){
     
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        
        maxi = max(maxi, arr[i]);
    }

    return maxi;
}

int main()
{
    int arr[]= {3,4,7,9,5,10};

    cout<< "Maximum in array is " << maxFromArray(arr, 6)<<endl;
 return 0;
}
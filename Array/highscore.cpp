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
    int t;
    cin>>t;
    int numbers[]={};
 
  while(t--){
       //  store input from user to array
  for (int i = 0; i < 4; ++i) {
    cin >> numbers[i];
  }
  cout<< maxFromArray(numbers, 4);
  }
 return 0;
}
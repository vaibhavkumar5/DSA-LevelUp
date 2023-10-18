#include<iostream>
using namespace std;

void sortZeroOneTwo(int arr[], int n){
    int one = 0, zero = 0, two = 0;

    //count all numbers
    for( int i =0; i<n; i++){
        if(arr[i] == 0){
            zero++;
        }else if(arr[i] == 1){
            one++;
        }else{
            two++;
        }
    }
    int i  =0;
    //put zero
    while(zero--){
        arr[i] = 0;
        i++;
    }
    //put one
    while(one--){
        arr[i] = 1;
        i++;
    }
     //put two
    while(two--){
        arr[i] = 2;
        i++;
    }
}
int main(){

    int arr[]= {1,0,2,2,0,1,1};
    
    sortZeroOneTwo(arr,7);

    //printing array
    for(int i=0; i<7; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;

 return 0;
}
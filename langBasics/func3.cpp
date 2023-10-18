#include<iostream>
using namespace std;

int getFactorial(int n){

    int ans=1;
    for(int i = n; i>=1; i--){
        ans = ans * i;
    }

    return ans;
}


int main()
{
    int n= 0;
    int fact= getFactorial(n);
    cout<<fact<<endl;
 return 0;
}
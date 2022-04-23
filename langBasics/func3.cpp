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
    int fact= getFactorial(5);
    cout<<fact<<endl;
 return 0;
}
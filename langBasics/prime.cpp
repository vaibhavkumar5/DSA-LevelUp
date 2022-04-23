#include<iostream>
using namespace std;
int main()
{
int n;
cout<< "enter n";
cin>>n;

bool isPrime = 1;
for(int i=2; i<n; i++){
    //rem= 0, not a prime
    if(n%i==0){
        isPrime=0;
        break;
    }
}
if(isPrime == 0){
    cout<<"not a prime"<<endl;
}else{
        cout<<"a prime"<<endl;

}

}
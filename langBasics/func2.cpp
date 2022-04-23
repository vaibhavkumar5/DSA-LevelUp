#include<iostream>
using namespace std;

void printSquare(int n){
    for(int i=1; i<=n; i++){
        cout<<i*i<<endl;
    }
}

int main()
{
    int n=5;
    printSquare(n);
 return 0;
}
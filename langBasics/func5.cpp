#include<iostream>
using namespace std;

void printSquare(int sq){
    for(int i=1; i<=sq; i++){
        cout<< "the square of "<< i << " " << "is " << i*i<<endl;
    }
}

int main()
{
    int n= 5;
    printSquare(n);

 return 0;
}
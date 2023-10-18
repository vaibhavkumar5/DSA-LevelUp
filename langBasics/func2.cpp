#include<iostream>
using namespace std;

void printEven(int a){
    for(int i=2; i<=a; i+=2){
         cout <<i<< " ";
    }
}


int main()
{
    int n= 15 ;
    printEven(n);
}
#include <iostream>
using namespace std;

//print name n times 
void name(int i, int n){
    if(i>n){
        return;
    }else{
        cout<<"vaibhav"<<endl;
        name(++i,n);
    }
}

// 1-N
void number(int i, int n){
    if(i>n){
        return;
    }else{
        cout<<i<<endl;
        number(++i,n);
    }
}
// n-1
void num1(int i, int n){
    if(i < 1){
        return;
    }else{
        cout<< i << " ";
        num1(i-1,n);
    }
}
void num2(int i, int n){
    if(i < 1){
        return;
    }else{
        num2(i-1,n);
        cout<< i << " ";
    }
}
void num3 (int i, int n){
    if(i > n){
        return;
    }else{
        num3(i+1,n);
        cout<<i<<" ";
    }
}

// sum of first n numbers parametirised wat 
void sum1(int i, int sum){
    if (i<1){
        cout<<sum;
        return;
    }else{
        sum1(i-1, sum+i);
    }
}
// sum of first n using functional
int sum2(int n){
    if(n==0){
        return 0;
    }else{
        return n + sum2(n-1);
    }
}
// Factorial of n (if n = 3 then 3 factorial is 1x2x3)
int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n * fact(n-1);
    }
} // do the same in parameter 

// reverse an array using recursion



int main(){
    int n=3;
    cout<< fact(n);
    return 0;
}
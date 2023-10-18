#include<iostream>
using namespace std;

void print1(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print2(){
    for(int i =0; i<5; i++){
        for(int j =0; j<=i;j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print3(){
    for(int i=0; i<5;i++){
        for(int j = 0; j<=i; j++){
            cout<< j+1;
        }
        cout<<endl;
    }
}

void print4(){
for(int i=0; i<5;i++){
        for(int j = 0; j<=i; j++){
            cout<< i+1;
        }
        cout<<endl;
    }
}

void print5(){
for(int i=1; i<5;i++){
        for(int j =1 ;j<5-i+ 1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print6 (){
for(int i=1; i<5;i++){
        for(int j =1 ;j<5-i+ 1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void print7 (){
for(int i=0; i<5;i++){
        for(int space = 0 ;space < 5-i-1;space++){
            cout<< " ";
        }
        for(int star=0; star<2*i+1; star++){
            cout<<"*";
        }
        for(int space = 0 ;space < 5-i-1;space++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print8 (int n){
    for(int i =0; i<n;i++){
        for(int s=0; s<i; s++){
            cout<<" ";
        }
        for(int star=0; star<2*n-(2*i+1); star++ ){
            cout<<"*";
        }
        for(int s=0; s<i; s++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print9  (int n){
    for(int i=0; i<n;i++){
        for(int space = 0 ;space < n-i-1;space++){
            cout<< " ";
        }
        for(int star=0; star<2*i+1; star++){
            cout<<"*";
        }
        for(int space = 0 ;space < n-i-1;space++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i =0; i<n;i++){
        for(int s=0; s<i; s++){
            cout<<" ";
        }
        for(int star=0; star<2*n-(2*i+1); star++ ){
            cout<<"*";
        }
        for(int s=0; s<i; s++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print10 (int n){
    for(int i =1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j =1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int n =5;
    print10(n);
}
#include <iostream>
using namespace std;

int main()
{
//sum of 1 to n
int n=2;
int sum=0;
for(int num=1 ; num<=n; num++){
    sum += num; 
}
cout<<sum;



/*
    //homework
    int a=1;
    int b =2;

    if(a-- > 0 || ++b >2){
        cout << "stage 1 - inside if ";
    }else{
        cout<<"stage2- inside else";
    }
    cout <<a<< " " << b << endl;


    //bitwise 
    int a =4;
    int b =6;

    cout<<"a&b " << (a&b)<< endl;
    cout<<"a|b " << (a|b)<< endl;
    cout<<"~a " << (~a)<< endl;
    cout<<"a^b " << (a^b)<< endl;

    
    int n;
    cin>>n;

    int i = 2;
    int sum = 0;
    while(i<=n){
        sum = i + sum;
        i+=2;

    }
    cout << sum;
    
    int n;
    cout << "enter n" << endl;
    cin >> n;

    for (int i = 1; n >= i; i++)
    {
        cout << i << " " ;
    }

    
    int n = 10;
    for (int i =1; i <= n; i++) {
        cout << i*2 << endl;
    }


    int num;
    cout << "enter value of num"<< endl;
    cin>> num;

    if (num>0) {
        cout << "number is positive" << endl;
    }
    else if (num<0){
        cout << "num is negative" << endl;
    }
    else {
        cout << "num is 0" << endl;
    }
    */

    // switch case

    /*
        switch (num) {
            case 0: cout << "im in case 0" <<endl;
            break;
            case 7: cout << "in 7" << endl;
            break;
            default : cout << "default " << endl;
        }
    */
}
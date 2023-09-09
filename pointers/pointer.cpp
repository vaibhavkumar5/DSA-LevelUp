#include <iostream>

using namespace std;

int main()
{
    int num =5;
    float f = 5.5;

    //address of operator - &
    //cout<<"Address of num ="<< &num <<endl;
   // cout<<"Address of num ="<< &f <<endl;

    int *ptr =&num;
    float *ptr2= &f; 

    //cout<<"int the block ptr "<< ptr<<endl; // derefernce operator 
    //cout<<"int the block ptr "<< ptr2;

    // copying pointers
    int n= 5;
    int *p3=&n;
    int a = n;

    a++;
    //we can see that the copy does not have effect on the origial;
    //cout<<*p3<<endl;
    (*p3)++;

    //cout<<n<<endl;

    // copying a pointer
    int *q= p3;
    //cout<<q<<"-"<<p3<<endl;
   // cout<<*q<<"-"<<*p3<<endl;


    // imp concept 
    // artihmetic op in pointers 
    int i =3;
    int *t=&i;

    *t=*t+1;
    cout<<*t;












    return 0;
} 
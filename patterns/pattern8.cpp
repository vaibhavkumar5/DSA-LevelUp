#include<iostream>
using namespace std;
int main()
{

int n=6;

for(int row=1;row<=n; row++){
    if(row==1 || row==n){
        for(int star=1; star<= n-row+1; star++){
            cout<<" *";
        }
    }else{
        cout<<" *";
        for(int space=1; space<= n-row-1; space++){
            cout<<"  ";
        }
        cout<<" *";
    }
    cout<<endl;
}

}

/*

output:
 * * * * * *
 *       *
 *     *
 *   *
 * *
 *

*/
#include <iostream>
using namespace std;

int main() {

    int n = 4;

    //For rows
    for (int row = 1; row <=n ; row++ ) {

        //for each row , print n stars or we have n col

        for (int col =1 ; col <= n; col++){
            cout<<"* ";
        }

        cout << endl;
    }
     
}

/*

output:
* * * * 
* * * * 
* * * * 
* * * * 

*/
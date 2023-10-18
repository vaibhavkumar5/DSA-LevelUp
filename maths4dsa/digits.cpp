#include <iostream>

using namespace std;

int main (){
    int num = 7789;

    while(num >0){
        int lastDigit = num % 10;
        cout<< lastDigit<< " ";
        num = num/10;
    }

    return 0;
}
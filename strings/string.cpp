#include <iostream>
#include <string>

using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e= n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
    
}
int getLength(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

bool checkPalindrome(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s]!= name[e]){
            return 0;
        } else{
            s++;
            e--;
        }
        
    }
    return 1;
}
char lowerCase(char ch){

    if(ch >= 'a' && ch<= 'z'){
            return ch;
    }else{
        char temp= ch-'A'+'a';
        return temp;
    }    
}
char maxOccCh(string s){
    int arr[25]={0};
    //lower 
    for(int i = 0; i<s.length(); i++){
        int number =0;
        char ch= s[i];
        // map ch to arr
        if(ch>='a'&&ch<='z'){
            number =  ch-'a';
        }else{
            number =  ch-'A';
        }
        arr[number]++;
    }
    //max
    int maxi=-1, ans=0;
    for(int i=0; i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;

}


int main (){
    // I/O of string
    //char name[20];
    //cout<<"enter your word"<<endl;
    //cin>>name;


    /*  can be used to find length of string
     not optimised, optimised approach in the above function

        int j=0;
        cout<<"your name is " << name ;
        for (int i=0; i<name[i];i++){
        
        if(name[i]!=0){
          j++;
        }
        
     }
        cout<<"Lenght is"<<j;
    
    */
   
   // Storing the length of string name
    //int lenght=getLength(name);
    



    /* 
        //Calling the reverse string function on string name
            reverse(name,lenght);
            cout<< "the lenght is "<< getLength(name) << endl;
            cout<< "the reverse is "<< name;

    */
    


    // Checking palindrome

       // cout<<"Palindrome or not "<<checkPalindrome(name, lenght)<<endl;
    
    //cout<<"lower case is "<< lowerCase('b');
    string s;
    cout<<"enter string" << endl;
    cin>>s;
    cout<<"max occ ch is "<< maxOccCh(s);

    return 0;

}
#include <iostream> 
#include <string>

bool valid(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        return true;
    }else return false;
}
char lower(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }else{
        char t= ch-'A'+'a';
        return t;
    }
}

bool checkPalindrome(string s)
{
    // Write your code here.
    
    // remove unnessary
    string temp="";
    for (int i =0; i<s.length();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    //lower case
    for (int i =0; i<temp.length();i++){
        temp[i]=lower(temp[i]);
    }
    int start=0;
    int end= temp.length()-1;
    while(start<end){
        if(temp[start]!= temp[end]){
            return 0;
        }else{
            start++;
            end--;
        }
        return 1;
    }
    
}
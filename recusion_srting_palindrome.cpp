#include<iostream>
using namespace std;

bool isPalindrome(string str,int s,int e){
     if(s>=e){
        return true;
     }
     if(str[s]!=str[e]){
        return false;
     }
     return isPalindrome(str,s+1,e-1);
}


int main(){
    string s="shakshi";
    cout<<isPalindrome(s,0,6)<<endl;
    return 0;
}
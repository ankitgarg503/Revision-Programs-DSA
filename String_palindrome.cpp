#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s){
    int p=s.size();
        for (int i = 0; i < p/2; i++)
        {
            if (s[i]!= s[p-1-i]){
                return false;
            }
            
        }
        return true;
}


int main(){
    string s="sos";
    if(isPalindrome(s)){
        cout<<"Yes, the "<<s<<" is a palindrome"<<endl; 
    }
    else{
        cout<<"No, the "<<s<<" is not a palindrome"<<endl; 
    }
    return 0;
}
#include<iostream>
using namespace std;

void generate(string s,string curr,int index){
    if(index==s.size()){
        cout<<curr<<"  ";
        return;
    }
    generate(s,curr,index+1);
    generate(s,curr+s[index],index+1);
}


int main(){
    string s="123";
    generate(s,"",0);
    return 0;
}
#include<iostream>
using namespace std;

int trail(int n){
    int count=0;
    int d=5;
    while(d<n){
        count+=n/d;
        d*=5;
    }
    return count;
}

int main(){
    int n=15;
    cout<<"Trailing Zero="<<trail(n)<<endl;
    return 0;
}
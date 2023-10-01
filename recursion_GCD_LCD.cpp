#include<iostream>
using namespace std;

int GCD(int a,int b){
        if(a==b)
            return a;
        if(a%b==0)
            return b;
        if (b%a==0)
            return a;
        if(b>a)
            return GCD(a,b%a);
        if(a>b)
            return GCD(a%b,b);               
}



int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin >> a>>b;
    int hcf=GCD(a,b);
    int lcm=(a*b)/hcf;
    cout<<"HCF GCD "<<hcf<<endl;
    cout<<"LCM LCD "<<lcm<<endl;
    return 0;
}
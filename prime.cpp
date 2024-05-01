#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter one number: "<<endl;
    cin>>n;
    if(n<2){
        cout<<"Not a PRime number: "<<endl;
        return 0;
    }
    bool p=false;
    for (int i = 2; i*i < n; i++)
    {
        if(n%i==0){
            p=true;
            break;
        }
    }
    if(!p){
        cout<<" Entered number is prime number: "<<endl;
    }
    else{
        cout<<" Entered number is not prime number: "<<endl;
    }
    
    return 0;
}
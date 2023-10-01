#include<iostream>
using namespace std;

int sum(int num){
    if(num==1)
        return 1;
    return sum(num-1)+num;
}

    //BackTracking
// void sum(int num){
//     if(num==1){
//        cout<<num<<" ";
//         return;
//     }   
//     sum(num-1);
//     cout<<num<<" ";
//     return;
// }

int main(){
    int num=10;
    int ans=sum(num);
    cout<<"Sum of "<<num<< " natural numbers are "<<ans<<endl;
    return 0;
}
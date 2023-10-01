#include<iostream>
using namespace std;

int factorial(int num){
   if (num==1 or num==0)
        return 1;
    return factorial(num-1)*num;      
      
}


int main(){
    int num=15;
    int ans=factorial(num);
    cout<<"Factorial of "<<num<<": "<<ans<<endl;
    return 0;
}
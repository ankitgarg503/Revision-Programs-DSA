#include<iostream>
using namespace std;

int fibonacci(int term){
    if(term == 0)
        return 0;
    if(term == 1)
        return 1;
    return fibonacci(term-1) + fibonacci(term-2);    

}

int main(){
    int term=5;
    int ans=fibonacci(term);
    cout<<term<<" term of fibonacci sequence="<<ans<<endl;
    return 0;
}
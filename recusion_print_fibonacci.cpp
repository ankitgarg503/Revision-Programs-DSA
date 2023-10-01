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

    for(int i=1;i<30;i++){
        int ans=fibonacci(i);
        cout<<ans<<"  ";
    }
    return 0;
}
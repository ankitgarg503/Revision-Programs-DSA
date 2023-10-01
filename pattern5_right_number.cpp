#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <=5; i++)
    {
        int space=5-i;
        while (space){
           cout<<" ";
           space--;
        }
        for (int j = 1; j<= i; j++)
        {
            int ct=j;
            cout<<ct;
            ct++;
        }
        cout<<endl;
        
    }
    
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
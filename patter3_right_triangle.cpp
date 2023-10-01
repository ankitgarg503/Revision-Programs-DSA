#include<iostream>
using namespace std;
int main(){
    for (int row = 0; row < 10; row++)
    {
        int space=10-row-1;
         while (space)
         {
            cout<<" ";
            space--;
         }
         for (int col = 0; col <= row; col++)
         {
             cout<<"*";
         }
         

         cout<<endl;
    }
    
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

 vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr(numRows);
        for(int i=0;i<numRows;i++){
            arr[i].resize(i+1);
            arr[i][0]=arr[i][i]=1;
            for(int j=1;j<i;j++){
                arr[i][j]=arr[i-1][j-1] +arr[i-1][j];
            }
        }
      return arr;
    }

int main(){
    int n=25;
    vector<vector<int>> ans=generate(n);
     for (int i = 0; i <n; i++){
         vector<int> temp=ans[i];
         for(auto i:temp){
             cout<<" "<<i<<" ";
         }
         cout<<endl;
     }
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void factorial(vector<int>& ans,int n){
    //push 1 into ans
    ans.push_back(1);
    for (int i = 2; i <=n; i++){
        int carry=0;
            vector<int> temp;
        for (int j = 0; j <ans.size() ; j++){
            int x=ans[j]*i+carry;
            temp.push_back(x%10);
            carry=x/10;
        }
        while (carry){
            temp.push_back(carry%10);
            carry=carry/10;
        }
        ans=temp;
        
    }
    reverse(ans.begin(), ans.end());
}



int main(){
    int num=1000;
    vector<int> ans;
    factorial(ans,num);
    for (int i = 0; i <ans.size(); i++)
    {
        cout<<ans[i];
    }
    
    return 0;
}
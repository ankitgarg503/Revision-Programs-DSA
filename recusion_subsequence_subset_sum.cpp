#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void solve(int arr[],vector<int>& ans,int index,int n){
//     if(index==n){
//         for(auto i:ans){
//             cout<<i<<"  ";
//         }
//         if(ans.size()==0){
//             cout<<" { } ";
//         }
//         return;
//     }
//     solve(arr,ans,index+1,n);
//     ans.push_back(arr[index]);
//     solve(arr,ans,index+1,n);
//     ans.pop_back();
// }


void solve(int arr[], vector<int>& ans, int index, int n,vector<int>& result) {
    if (index == n) {
        if (ans.empty()) {
            // cout << "{ }";
            result.push_back(0);
        } else {
            // cout << "{ ";
            int sum=0;
            for (auto i : ans) {
                // cout << i << " ";
                sum+=i;
            }
            result.push_back(sum);  
            // cout << "}";
        }
        cout << "  ";
        return;
    }
    
    solve(arr, ans, index + 1, n,result);
    ans.push_back(arr[index]);
    solve(arr, ans, index + 1, n,result);
    ans.pop_back();
    
}





int main(){
    int arr[]={5,1,2};
    vector<int> ans;
    vector<int> result;
    solve(arr,ans,0,3,result);
    cout<<endl;
    sort(result.begin(),result.end());
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<"  ";
    }
    return 0;
}
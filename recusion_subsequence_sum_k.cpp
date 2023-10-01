#include<iostream>
#include<vector>
using namespace std;

void solve(int arr[], vector<int>& ans, int index, int n,int sum,int k) {
    if (index == n) {
        if(sum==k){
            cout << "{ ";
            for (auto i : ans) {
                cout << i << " ";
            }
            cout << "}";
        }
        cout << "  ";
        return;
    }
    
    ans.push_back(arr[index]);
    sum+=arr[index];
    solve(arr, ans, index + 1, n,sum,k);
    sum-=arr[index];
    ans.pop_back();
    solve(arr, ans, index + 1, n,sum,k);
}





int main(){
    int arr[]={3,1,2};
    int k=3;
    int sum=0;
    vector<int> ans;
    solve(arr,ans,0,3,sum,k);
    return 0;
}
#include<iostream>
#include<vector>
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


void solve(int arr[], vector<int>& ans, int index, int n) {
    if (index == n) {
        if (ans.empty()) {
            cout << "{ }";
        } else {
            cout << "{ ";
            for (auto i : ans) {
                cout << i << " ";
            }
            cout << "}";
        }
        cout << "  ";
        return;
    }
    
    solve(arr, ans, index + 1, n);
    ans.push_back(arr[index]);
    solve(arr, ans, index + 1, n);
    ans.pop_back();
}





int main(){
    int arr[]={1,2,3};
    vector<int> ans;
    solve(arr,ans,0,3);
    return 0;
}
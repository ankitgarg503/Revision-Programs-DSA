#include<iostream>
#include<vector>
#include<set>
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


void solve(int arr[], vector<int>& ans, int index, int n,set<vector<int>>& st) {
    if (index == n) {
        if (ans.empty()) {
            // cout << "{ }";
         
        } else {
            // cout << "{ ";
            vector<int> temp;
            for (auto i : ans) {
              //  cout << i << " ";
                temp.push_back(i);
            }
            st.insert(temp);
            // cout << "}";
        }
        cout << "  ";
        return;
    }
    
    solve(arr, ans, index + 1, n,st);
    ans.push_back(arr[index]);
    solve(arr, ans, index + 1, n,st);
    ans.pop_back();
}





int main(){
    int arr[]={1,2,2};
    vector<int> ans;
    vector<vector<int>> v;
    set<vector<int>> st;
    solve(arr,ans,0,3,st);
    for(auto i :st){
        v.push_back(i);
    }
    cout<<endl;
    for (int i = 0; i < v.size(); ++i) {
         cout << "{ ";
        for (int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << " ";
        }
           cout << "}  ";
        // cout << endl;
    }
    
    
    return 0;
}
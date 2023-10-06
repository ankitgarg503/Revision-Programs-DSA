#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> v){
    for(int i=0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // input array
    vector<int>v={2,4,5,6,7,6,4,3,2,1,1,1,4,5,6,7,16,7,21};
    printArray(v);
   
    // fiding maximum element from array for declaring count array
    int n=v.size();
    int maxi=-34;    
    for(int i=0; i<n; i++) maxi=max(v[i],maxi);

    // declaring count array intializing with 0 thn finding count of every element
    vector<int> count(maxi+1,0);
    for(int i=0;i<=n;i++){
        count[v[i]]=count[v[i]]+1;
    }
    printArray(count);

    // finding prefix sum elements array
    for(int i=1;i<=maxi;i++){
        count[i]=count[i-1]+count[i];
    }
    printArray(count);

    // Main logic for sortin array and store in output array
    vector<int>out(n+1);
    for(int i=n-1;i>=0;i--){
        out[count[v[i]]-1]=v[i];
        count[v[i]]=count[v[i]]-1;
    }
    // copy output array to original array 
    for(int i=0;i<n;i++){
        v[i]=out[i];
    }
    printArray(out);
    printArray(v);
    return 0;
}
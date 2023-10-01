#include<bits/stdc++.h>
#include<iostream>
using namespace std;



vector<int>findIntersection(int arr[],int m,int arr2[],int n){
      vector<int>v;
      sort(arr,arr+m);
     sort(arr2,arr2+n);
     int i=0;
     int j=0;
     int k=0;
     while (i<m and j<n )
     {
         if((arr[i]==arr2[j])){
            v.push_back(arr[i]);
            i++; j++;
         }
         else if(arr[i]>arr2[j]){
            j++;
         }
         else{
            i++;
         }

     }
   return v;
}

vector<int> findUnion(int arr[],int m,int arr2[],int n){
    set<int>s;
     vector<int>v;
     for (int i = 0; i <m; i++)
     {
         s.insert(arr[i]);
     }
     for (int i = 0; i <n; i++)
     {
         s.insert(arr2[i]);
     }
     for (auto i:s)
     {
        v.push_back(i);
     }
    return v;
    
}




int main(){
    int arr[]={1,2,3,4,5,6,7};
    int arr2[]={11,22,3,42,5,6,};
    vector<int>v=findUnion(arr,7, arr2,6);
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
     vector<int>v2=findIntersection(arr,7, arr2,6);
     for (int i = 0; i <v2.size(); i++)
     {
         cout<<v2[i]<<" ";
     }
     cout<<endl;
    
    return 0;
}
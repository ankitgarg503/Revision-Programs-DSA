#include<vector>
#include<queue>
#include<iostream>
using namespace std;

int prims(vector<vector<int>> adj[],int V){
    int sum=0;
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
     vector<int> vis(V,0);
     pq.push({0,0});// wt,node
     while (!pq.empty()){
        int node=pq.top().second;
        int wet=pq.top().first;
        pq.pop();
        if(vis[node]==1) continue;
        sum+=wet;
        vis[node]=1;
        for(auto it:adj[node]){
             int node=it[0];
             int wet=it[1];
             if(!vis[node]){
                 pq.push({wet,node});
             }
        }
     }
     return sum;
     
}
int main(){
   
      int V,E;
      cout<<"Enter number of vertices and edges: "<<endl;
      cin >> V >> E;
        vector<vector<int>>adj[V];
        int i=0;
        while (i++<E){
            int u,v,w;
            cin>>u>>v>>w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
       
        
    }
    int ans=prims(adj,V);
    cout<<ans<<endl;
    return 0;
}
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

class Graph {
    public:
    int e, v;
public:   

    vector<int> bellmanFord(vector<vector<int>>& vg,int src,int N){
         vector<int> dist(N,1e8);
         dist[src] = 0;
         for(int i=0;i<N-1;i++){
            for(auto it:vg){
                int u=it[0];
                int v=it[1];
                int wt=it[2];
                if(dist[u]!=1e8 and dist[u]+wt<dist[v]){
                    dist[v]=dist[u]+wt;
                }
            }
         }
        //  for -ve cycle 
        //  for(auto it:vg){
        //         int u=it[0];
        //         int v=it[1];
        //         int wt=it[2];
        //         if(dist[u]!=1e8 and dist[u]+wt<dist[v]){
        //             dist[v]=dist[u]+wt;
        //         }
        //         return {-1};
        //     }
          return dist;
    }

    
 

};

int main() {
    Graph g;
 
     
     vector<vector<int>> v;
     v.push_back({0,1,2});
      v.push_back({1,2,3});
      v.push_back({2,3,4});
      v.push_back({3,4,5});
      v.push_back({3,5,-2});
     vector<int> ans=g.bellmanFord(v,0,6);    
     for(int i=0;i<ans.size();i++){
            cout<<"0,"<<i<<" -->"<<ans[i]<<endl;
     }
     

    return 0;
}

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
// creation of a graph
class Graph{
     public:
     int v,e;
     vector<int> g[10];
     void addEdge(int m,int n,bool dir){
        g[m].push_back(n);
        if(dir==false)
            g[n].push_back(m);
     }
     void printGraph(void){
        for(int i=0;i<v;i++){
            cout<<i<<"-->";
            for(auto j:g[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
     }



    // BFS traversal of a graph

    vector<int> BFS(void){
        vector<int> ans;
        vector<int>vis(v,0);
        queue<int> q;
         q.push(0);
         vis[0]=1;
         while (!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
             for(auto it:g[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
             }

         }
        return ans; 

    }

   // DFS of traversal
   void DFS(vector<int>& vis,vector<int>& ans,int src){
            vis[src]=1;
            ans.push_back(src);
            for(auto i:g[src]){
                if(!vis[i]){
                    DFS(vis,ans,i);
                }
            }
   }

   vector<int> DFS(void){
        vector<int> ans;
        vector<int>vis(v,0);
        DFS(vis,ans,0);
        return ans;
   }

    bool detectCycle(void){
        vector<int> vis(v,0);
        queue<pair<int,int>> q;
        vector<int> ans;
        vis[0]=1;
        q.push({0,-1});
        while(!q.empty()) {
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            ans.push_back(node);
            for(auto it:g[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(parent!=it){
                    return true;
                }
            }
        }
        return false;
    }

    bool checkBipartite(int color[]){
         queue<int> q;
        //  vector<int> vis(0);
         q.push(0);
         color[0]=0;
         while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:g[node]){
                if( color[it]==-1){
                    color[it]=!color[node];
                    q.push(it);
                }
                else{
                    if(color[node]==color[it]){
                        return false;
                    }
                }
            }
         }
         return true;
    }

    bool detectCycleUG(void){
        vector<int> vis(v,0);
        queue<pair<int,int>> q;
        vector<int> ans;
        vis[0]=1;
        q.push({0,-1});
        while(!q.empty()) {
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            ans.push_back(node);
            for(auto it:g[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(parent!=it){
                    return true;
                }
            }
        }
        return false;
    }

    vector<int> topoSort(void){
        vector<int> ans;
        queue<int> q;
        int inDegree[v]={0};
        for(int i=0;i<v;i++){
            for(auto it:g[i]){
                inDegree[it]++;
            }
        }
        for(int i=0;i<v;i++){
            if(inDegree[i]==0) q.push(i);
        }
        while (!q.empty()){
             int node=q.front();
             q.pop();
             ans.push_back(node); 
             for(auto it:g[node]){
                inDegree[it]--;
                if(inDegree[it]==0) q.push(it);
             }
        }
      
        return ans;
    }

    // TOPOLOGICAL Sort using Khan's algorithm
    void topo(int src,vector<int>& vis, vector<int>& ans){
        for(auto child:g[src]){
            if(vis[child]) continue;
            vis[child] =1;
            topo(child,vis,ans);
        }
        ans.push_back(src);
    }

    // Find shortest path from src to every node in undirected graph
    vector<int> shortestPath(int src,int N){
         vector<int> ans(N,1e8);
         queue<int> q;
         q.push(src);
         ans[0]=0;
         while (!q.empty()){
             int node=q.front();
             q.pop();
             for(auto it:g[node]){
                if(ans[node]+1<ans[it]){
                    ans[it]=ans[node]+1;
                    q.push(it);
                }
             }
         }
         return ans;
    }
};









int main(){
    int m,n;
    cout<<"Enter number of vertices"<<endl;
    cin>>m;
    cout<<"Enter number of edges"<<endl;
    cin>>n;
    Graph g1;
    g1.v=m;
     for(int i=0;i<n;i++){
         int u,v;
         cin>>u>>v;
          g1.addEdge(u,v,false);
     }
    g1.printGraph();
    // vector<int> ans=g1.BFS();
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<"  ";
    // }
    // ans.clear();
    // cout<<endl;
    //  ans=g1.DFS();
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<"  ";
    // }
     cout<<"\n Detecting Cycles in Undirected Graph\n ";
    // cout<<g1.detectCycle();
    // cout<<"\n Check graph is Bipartite or not\n";
    // int color[m]={-1};
    // cout<<g1.checkBipartite(color);
    cout<<g1.detectCycleUG();

    // cout<<" \n TOPOLOGICAL SORT"<<endl;
    // vector<int> ans2=g1.topoSort();
    // for(int i=0;i<ans2.size();i++){
    //     cout<<ans2[i]<<"  ";
    // }
// cout<<endl;
//     vector<int> ansr;
//     vector<int> vis(m,0);
//     for(int i=0;i<m;i++){
//         if(vis[i]) continue;
//         vis[i]=1;
//         g1.topo(i,vis,ansr);
//     }
//     reverse(ansr.begin(),ansr.end());
//     for(int i=0;i<ansr.size();i++){
//         cout<<ansr[i]<<"  ";
//     }
cout<<endl;
   vector<int> ans=g1.shortestPath(0,7);
   for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
   }

    return 0;
}
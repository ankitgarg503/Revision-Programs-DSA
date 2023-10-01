#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

class Graph {
    public:
    int e, v;
public:
    vector<int> mp[100];  // Assuming a maximum of 100 vertices
    void addEdge(int u, int v, bool directed) {
        mp[u].push_back(v);
        mp[v].push_back(u);
    }
    void printGraph(void) {
        for (int i = 0; i < v; ++i) {
            cout << i << "-->";
            for (int j : mp[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    void dfs(int sNode,vector<int>& ans,int vis[]){
         vis[sNode] =1;
         ans.push_back(sNode);
         for(auto it:mp[sNode]){
            if(!vis[it]){
                dfs(it,ans,vis);
            }
         }
    }
    
   vector<int> DFS(int sNode){
        vector<int> ans;
        int vis[v]={0};
        vis[0]=1;
        dfs(sNode,ans,vis);
        return ans;
   }

};

int main() {
    Graph g;
    int vertices;
    int edges;
    cout << "Enter no of vertices" << endl;
    cin >> vertices;
    g.v = vertices; // Assigning the number of vertices
    cout << "Enter number of edges" << endl;
    cin >> edges;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }
    // g.printGraph();


  // BFS Traversal of Graph
   
    vector<int> ans=g.DFS(0);
     for (int i = 0; i <ans.size(); i++)
     {
        cout<<ans[i]<<" ";
     }
     


    return 0;
}

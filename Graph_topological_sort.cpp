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
        if(directed)
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

    
   vector<int> BFS(int sNode){
        vector<int> ans;
        int vis[v]={0};
        vis[0]=1;
        queue<int> q;
        q.push(sNode);
        while (!q.empty()) {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto i:mp[node]) {
                if(!vis[i]) {
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        return ans;
   }


   void dfs(int source, vector<bool> &vis, vector<int> &ans){
        
        for(int child: mp[source]){
            if(vis[child]) continue;
            vis[child] = true;
            dfs(child, vis, ans);
        }
        
        ans.push_back(source);
    }
	vector<int> topoSort(int V) 
	{
	    vector<int> ans;
	    vector<bool> vis(V, false);
	    
	    for(int i=0; i<V; i++){
	        if(vis[i]) continue;
            
	        vis[i] = true;
	        dfs(i,  vis, ans);
	    }
	    reverse(ans.begin(), ans.end());
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
     g.printGraph();


  // BFS Traversal of Graph
   
    vector<int> ans2=g.BFS(0);
     for (int i = 0; i <ans2.size(); i++)
     {
        cout<<ans2[i]<<" ";
     }
     
    cout<<endl;
    vector<int> ans=g.topoSort(vertices);
     for (int i = 0; i <ans.size(); i++)
     {
        cout<<ans[i]<<" ";
     }
     

    return 0;
}

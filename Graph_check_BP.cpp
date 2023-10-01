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

    bool check(int sNode,vector<int> mp[],int color[]){
        
         queue<int> q;
	     q.push(sNode);
	     color[sNode]=0;
	     while(!q.empty()){
	         int node=q.front();
	         q.pop();
	         for(auto i:mp[node]){
	             if(color[i]==-1){
	                 color[i]=!color[node];
	                 q.push(i);
	             }
	             else if(color[i]==color[node]){
	                 return false;
	             }
	         }
	     }
	     return true;
    
}


	bool isBipartite(int V){
	     int color[V];
	     for(int i=0;i<V;i++) color[i]=-1;
	     
	     for(int i=0;i<V;i++){
	         if(color[i]== -1){
    	         if(check(i,mp,color)==false){
    	             return false;
    	         }
	         }
	     }
	     return true;
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

    
     cout<<g.isBipartite(vertices);


    return 0;
}

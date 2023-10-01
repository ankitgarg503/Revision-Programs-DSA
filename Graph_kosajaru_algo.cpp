// strogly connected components
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

	void dfs1(int node,vector<vector<int>>& adj,vector<int>& vis,stack<int>& st){
	    vis[node]=1;
	    for(auto it:adj[node]){
	        if(!vis[it]){
	            dfs1(it,adj,vis,st);
	        }
	    }
	    
	    st.push(node);
	}
	
	
	void dfs2(int node,vector<vector<int>>& adj,vector<int>& vis){
	    vis[node]=1;
	    for(auto it:adj[node]){
	        if(!vis[it]){
	            dfs2(it,adj,vis);
	        }
	    }
	    
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        vector<int> vis(V,0);
        stack<int> st;
        // 1st dfs traversal for filling the stack basically sorting purpose
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs1(i,adj,vis,st);
            }
        }
        // Transpose graph
        vector<vector<int>> adjT(V);
        for(int i=0;i<V;i++){
            vis[i]=0;
            for(auto it:adj[i]){
                adjT[it].push_back(i);
            }
        }
        
        // Count strongly connected componets dfs traversal
        int count=0;
        while(!st.empty()){
            int node=st.top();
            st.pop();
            if(!vis[node]){
                count++;
                dfs2(node,adjT,vis);
            }
        }
        
        return count;
        
    }

int main(){
    vector<vector<int>> adj;
    adj.push_back({2,3});
    adj.push_back({0});
    adj.push_back({1});
    adj.push_back({4});
    adj.push_back({});
    int V=5;
    int ans=kosaraju(V,adj);
    cout<<ans<<endl;
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph{
    private:
    int e,v;
    public:
    unordered_map<int,list<int>>mp;
    void addEdge(int u,int v,bool directed){
        mp[u].push_back(v);
        mp[v].push_back(u);
    }
    void printGraph(void){
        for(auto i:mp){
            cout<<i.first<<"-->";
            for(auto j:i.second){
                cout<<j<<" ";               
        }
        cout<<endl;
    }
}

};

int main(){
    Graph g;
    int vertices;
    int edges;
    cout<<"Enter no of vertices"<<endl;
    cin>>vertices;
    cout<<"Enter number of edges"<<endl;
    cin>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printGraph();
    return 0;
}
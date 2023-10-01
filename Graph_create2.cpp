#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph{
  unordered_map<int,list<int> > g;

  public:
  void addEdge(int u,int v,bool dir){
        g[u].push_back(v);
        if(!dir){
            g[v].push_back(u);
        }
  }
  void print(void){
    for(auto item:g){
        cout<<item.first<<"--->";
        for(auto i:item.second){
            cout<<i<<"  ";
        }
        cout<<endl;
    }
  }

};



int main(){
    int edges,vrtices;
    cout<<"Enter How many vertices you want ";
    cin>>vrtices;
    cout<<"Enter How many edges you want ";
    cin>>edges;
    Graph g;
    for (int i = 0; i < edges; i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    cout<<endl;
    g.print();
    return 0;
}
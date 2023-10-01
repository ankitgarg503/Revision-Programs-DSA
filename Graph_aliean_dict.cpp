#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

class Graph {
    public:
    int e, v=4;

    vector<int> adj[100];  // Assuming a maximum of 100 vertices
  

    vector<int> topoSort(void){
        vector<int> ans;
        queue<int> q;
        int inDegree[v]={0};
        for(int i=0;i<v;i++){
            for(auto it:adj[i]){
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
             for(auto it:adj[node]){
                inDegree[it]--;
                if(inDegree[it]==0) q.push(it);
             }
        }
      
        return ans;
    }

    string aliean(string dict[],int N,int k){
          for (int i = 0; i < N-1; i++){
             string str1=dict[i];
             string str2=dict[i+1];
             int len=min(str1.length(),str2.length());
             for(int j=0;j<len;j++){
                if(str1[j]!=str2[j]){
                    adj[str1[j]-'a'].push_back(str2[j]-'a');
                    break;
                }
             }
          }
          vector<int> ans=topoSort();
          string res="";
          for(auto it:ans){
            res+=char(it+'a');
          }
          return res;
    }



};

int main() {
    Graph g;
    int vertices;
    int edges;
    

    string dict[]={"baaa","abcd","abca","cab"};
    string ans=g.aliean(dict,4,4);
    cout<<ans<<endl;
    return 0;
}

// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> dijestra(vector<vector<pair<int, int>>>& adj, int V, int src) {
    vector<int> dist(V, 1e8);
    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({dist[src], src});

    while (!pq.empty()) {
        int node = pq.top().second;
        int distance = pq.top().first;
        pq.pop();

        for (auto neighbor : adj[node]) {
            int adjNode = neighbor.first;
            int weight = neighbor.second;
            if (distance + weight < dist[adjNode]) {
                dist[adjNode] = distance + weight;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
    return dist;
}

int main() {
    int V = 3;
    vector<vector<pair<int, int>>> adj(V);

    adj[0].push_back({1, 2});
    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});
    // adj[2].push_back({1, 3});

    int src = 1;
    vector<int> ans = dijestra(adj, V, src);

    for (int i = 0; i < ans.size(); i++) {
        cout <<  src << " to node " << i << ": " << ans[i] << endl;
    }

    return 0;
}


// vector<int> dijestra(vector<vector<int>>& adj,int V,int src){
//         vector<int> dist(V,1e8);
//         dist[src] = 0;
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//         pq.push({dist[src],src});
//         while (!pq.empty()){
//             int node=pq.top().second;
//             int distance=pq.top().first;
//             pq.pop();
//             for(auto it:adj){
//                 int weight=it[1];
//                 int adjNode=it[0];
//                 if(distance+weight<dist[adjNode]){
//                     dist[adjNode]=distance+weight;
//                     pq.push({dist[adjNode],adjNode});
//                 }
//             }
//         }
//       return dist;  
// }


// int main(){
//     vector<vector<int>> adj(3,vector<int>(2));
//     adj[0].push_back(1);
//     adj[1].push_back(1);
//     adj[1].push_back(3);
//     adj[2].push_back(6);
//     adj[2].push_back(3);
//     adj[0].push_back(6);
//     vector<int> ans=dijestra(adj,3,1);
//     for (int i = 0; i < ans.size(); i++)
//     {
//          cout<<ans[i]<<"  ";
//     }
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;;
    vector<vector<int>> adj(n,vector<int>());
    for(int i=0;i<n;i++){
        int u,v;cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int root=0;
    vector<int> bfs_traversal;
    queue<int> qu;
    vector<bool> visit(n,false);
    qu.push(root);
    visit[root]=true;
    while(!qu.empty()){
         int curr =qu.front();
         qu.pop();
         bfs_traversal.push_back(curr);
         for(auto neigh:adj[curr]){
             if(!visit[neigh]){
                visit[neigh]=true;
                qu.push(neigh);
             }
         }
    }
}
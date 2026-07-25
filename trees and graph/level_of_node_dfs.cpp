#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void dfs(int curr ,vector<vector<int>>& adj,int parent,vector<int>& level){
    if(parent ==- 1){
        level[curr]=0;
    }
    else{
        level[curr]=level[parent]+1;
    }
    for(auto neigh: adj[curr]){
        if(neigh !=parent){
            dfs(neigh,adj,curr,level);// here are passing currentnode as parent as we are exploring currentnode's child
        }
    }
}
void dfs4(){
    i
}
void dfs2(int curr ,vector<vector<int>>& adj,int parent,vector<int>& level,int cnt){
    level[curr]=cnt;
    for(auto neigh: adj[curr]){
        if(neigh !=parent){
            dfs2(neigh,adj,curr,level,cnt+1);// here are passing currentnode as parent as we are exploring currentnode's child
        }
    }
}
// time complexity
int main(){
    int n;cin>>n;//no of nodes  
    vector<vector<int>> adj(n,vector<int>());//edges
    for(int i=0;i<n-1;i++){// loop for no of edeges
         int u,v;  
         cin>>u>>v;
         u--;v--;// o based indexing
         adj[u].push_back(v);
         adj[v].push_back(u);// both  are cnnected to each other so we push_back in u and v both
    }
    int root;// here are assuming is o 
    cin>>root;
    root--;
    vector<int> level(n,0); 
    dfs(0,adj,-1,level);// -1 is parent of root mean doesn't exist
    dfs2(0,adj,-1,level,0);
}
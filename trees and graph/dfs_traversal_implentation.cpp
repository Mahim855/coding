#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void dfs(int currentnode ,vector<vector<int>>& adj,int parent,vector<int>& ans){
    ans.push_back(currentnode);/// when ivisit node push into ans
    // vis[currentnode]=true;
    for(int neigh: adj[currentnode]){
        if(neigh !=parent){
            dfs(neigh,adj,currentnode,ans);// here are passing currentnode as parent as we are exploring currentnode's child
        }
    }
}
// time complexity
int main(){
    int n;cin>>n;//no of nodes  
    vector<vector<int>> adj(n);//edges
    for(int i=0;i<n-1;i++){// loop for no of edeges
         int u,v;  
         cin>>u>>v;
         u--;v--;// o based indexing
         adj[u].push_back(v);
         adj[v].push_back(u);// both  are cnnected to each other so we push_back in u and v both
    }
    int root=0;// here are assuming is o 
    vector<int> dfs_tra; 
    dfs(0,adj,-1,dfs_tra);// -1 is parent of root mean doesn't exist
}

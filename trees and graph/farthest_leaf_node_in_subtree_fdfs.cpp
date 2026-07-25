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
void dfs2(int curr ,vector<vector<int>>& adj,int parent,vector<int>& maxi_level,vector<int>& level){
    maxi_level[curr]=level[curr];
    for(auto neigh: adj[curr]){
        if(neigh !=parent){
            maxi_level[curr]= max(maxi_level[curr], level[neigh]);
            dfs2(neigh,adj,curr,maxi_level,level);// here are passing currentnode as parent as we are exploring currentnode's child
        }
    }
}
void dfs3(int curr ,vector<vector<int>>& adj,int parent,vector<int>& ans,vector<int>& maxi_level,vector<int>& level){
    ans[curr]=maxi_level[curr]-level[curr];
    for(auto neigh: adj[curr]){
        if(neigh !=parent){
            dfs3(neigh,adj,curr,ans,maxi_level,level);// here are passing currentnode as parent as we are exploring currentnode's child
        }
    }
}
//method 2
void fleaf(int curr ,vector<vector<int>>& adj,int parent,vector<int>& farth_leaf){
    for(auto neigh: adj[curr]){
        if(neigh !=parent){
            dfs3(neigh,adj,curr,farth_leaf);// here are passing currentnode as parent as we are exploring currentnode's child
            farth_leaf[curr]=max(farth_leaf[curr],farth_leaf[neigh])+1;
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
    vector<int> maxi_level(n,0);
    dfs2(0,adj,-1,maxi_level,level);
    vector<int> ans(n,0);
    dfs3(0,adj,-1,ans,maxi_level,level);
    vector<int> farth_leaf(n,0);
    fleaf(root,adj,-1,farth_leaf);
}
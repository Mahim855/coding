#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void dfs(int currentnode ,vector<vector<int>>& adj,int parent,vector<int>& child){
    if(currentnode==0){
        child[currentnode]=adj[currentnode].size();
    }
    else{
        child[currentnode]=adj[currentnode].size()-1;
    }
    for(int neigh: adj[currentnode]){
        if(neigh !=parent){
            dfs(neigh,adj,currentnode,child);// here are passing currentnode as parent as we are exploring currentnode's child
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
    vector<int> child; 
    dfs(0,adj,-1,child);// -1 is parent of root mean doesn't exist
} 
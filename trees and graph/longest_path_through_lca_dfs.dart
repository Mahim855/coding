#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fleaf(int curr ,vector<vector<int>>& adj,int parent,vector<int>& farth_leaf){
    for(auto neigh: adj[curr]){
        if(neigh !=parent){
            dfs3(neigh,adj,curr,farth_leaf);// here are passing currentnode as parent as we are exploring currentnode's child
            farth_leaf[curr]=max(farth_leaf[curr],farth_leaf[neigh])+1;
        }
    }
}
void dfs(int curr ,vector<vector<int>>& adj,int parent,vector<int>& farth_leaf,vector<int>& ans){
    pair<int,int> topchild={-1,-1};
    //topchildren.first stores the max
    //topchildren.seconf stores the max_second
    //atleat 2 child ya one child  ya 0 child
    for(auto neigh: adj[curr]){
        if(neigh !=parent){
            dfs(neigh,adj,curr,farth_leaf,ans);// here are passing currentnode as parent as we are exploring currentnode's child
            if(topchild.first==-1){
                topchild.first==farth_leaf[neigh];
            }
            else {
                int currvalue= farth_leaf[neigh];
                if(topchild.first<currvalue){
                    topchild.second=topchild.first;
                    topchild.first=currvalue;
                }
                else if(topchild.second<currvalue){
                    topchild.second=currvalue;
                }
            }
        }
    }
    // if(topchild.first==-1){
    //     //0 child
    //     ans[curr]=0;
    // }
    // else if(topchild.second==-1){
    //     // one child
    //     ans[curr]=topchild.first+1;
    // }
    // else{
    //     // atleat 2 child
    //     ans[curr]=topchild.first+topchild.second+2;
    // }
    ans[curr]=topchild.first+topchild.second+2;
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
    vector<int> farth_leaf(n,0);
    fleaf(root,adj,-1,farth_leaf);
    vector<int> ans(n,0);
    dfs(root,adj,-1,farth_leaf,ans);

}
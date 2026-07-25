#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void dfs(int currentnode ,vector<vector<int>>& adj,int parent,vector<int>& intime,vector<int>&outime,int& globaltime){
    intime[currentnode]= ++globaltime;
     
    for(int neigh: adj[currentnode]){
        if(neigh !=parent){
            dfs(neigh,adj,currentnode,intime,outime,globaltime );// here are passing currentnode as parent as we are exploring currentnode's child
        }
    }
    outime[currentnode]= ++globaltime;
}
bool isancestor(int x ,int y,vector<int>& intime,vector<int>& outtime){
    if(intime[x]<intime[y] &&outtime[x]>outtime[y]){
        return true; 
    }
    return false;
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
    int root;// here are assuming is o 
    cin>>root;root--;
    vector<int> intime(n),outtime(n); 
    int globaltime=0; 
    dfs(root,adj,-1,intime,outtime,globaltime);// -1 is parent of root mean doesn't exist
    int q;cin>>q;
    while(q--){
        int x,y;cin>>x>>y;
        if(isancestor(x,y,intime,outtime)){
            cout<<"X is ancestor"<<endl;
        }
        else{
            cout<<"X is not ancestor"<<endl;
        }
        }
    }
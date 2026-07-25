#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
       int n;
       cin>>n;
       vector<int> a(n);
       int ans=0;
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       for(int i=0;i<n-1;i++){
           float m=max(a[i],a[i+1]);
           float b=min(a[i],a[i+1]);
           if(m/b>2){
               while(m/b>2){
                   m=ceil(m/2);
                   ans+=1;
               }
           }
           else{
               ans=ans;
           }
       }
       cout<<ans<<endl;
  }
}

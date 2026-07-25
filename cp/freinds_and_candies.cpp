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
           ans=ans+a[i];
       }
       int count=0;
       if(ans%n==0){;
           ans=ans/n;
           for(int i=0;i<n;i++){
               if(a[i]>ans){
                   count++;
               }
           }
           cout<<count<<endl;
       }
       else{
           cout<<-1<<endl;
       }
       
  }
}

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
       int count =0;
       for(int i=0;i<n;i++){
           if((ans-a[i])%3==0){
               count=1;
               break;
           }
       }
       if(ans%3==0){
           cout<<0<<endl;
       }
       else if(ans%3==2){
           cout<<1<<endl;
       }
       else if(ans%3==1){
          if(count==1){
              cout<<1<<endl;
          }
          else{
              cout<<2<<endl;
          }
      }
  }
}

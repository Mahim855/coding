#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
       int l1;
       cin>>l1;
       int l2;
       cin>>l2;
       int l3;
       cin>>l3;
      if(l1+l2==l3 or l1+l3==l2 or l2+l3==l1){
          cout<<"YES"<<endl;
      }
      else if((l1==l2 && l3%2==0) or(l1==l3 && l2%2==0) or (l3==l2 && l1%2==0)){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
  }
}

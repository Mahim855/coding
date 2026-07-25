#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
       vector<int> a(4);
       for(int i=0;i<4;i++){
           cin>>a[i];
       }
       int x=max(a[0],a[1]);
       int y=max(a[2],a[3]);
       sort(a.begin(),a.end());
       if((x==a[2] or x==a[3]) && (y==a[2] or y==a[3]) ){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
}

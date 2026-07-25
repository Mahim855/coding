#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int> a(n);
       int x=0;
       int b=0;
       for(int i=0;i<n;i++){
           cin>>a[i];
           if(i%2!=a[i]%2){
               if(i%2==0){
                   x++;
               }
               else{
                   b++;
               }
           }
       }
       if(x==b){
           cout<<x<<endl;
       }
       else{
           cout<<-1<<endl;
       }
    }
}

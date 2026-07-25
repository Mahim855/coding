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
            ans+=a[i];
        }
        if(ans%n==0){
            cout<<0<<endl;
        }
        else{
             cout<<1<<endl;
             
         }
    }
}

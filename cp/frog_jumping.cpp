#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b,k,d;
        long long int ans;
        ans=d=0;
        cin>>a>>b>>k;
        if(k%2==1){
            d=(k/2)+1;
        }else{
            d=k/2;
        }
        ans=(d*a)-((k-d)*b);
        cout<<ans<<endl;
    }
}

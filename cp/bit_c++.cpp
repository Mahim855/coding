#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans =0;
    for(int i=0;i<n;i++){
        if(v[i]=="++X" or v[i]=="X++" ){
            ans++;
        }
        else{ 
            ans--;
        }
    }
    cout<<ans<<endl;
}

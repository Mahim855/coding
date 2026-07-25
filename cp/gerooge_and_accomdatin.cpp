#include <bits/stdc++.h> 
using namespace std;

int main(){
// 	int testcases;
// 	cin>>testcases;
// 	while(testcases--){
		int n;
		cin>>n;
		vector<int> v(2*n);
		for(int  i=0; i<2*n;i++){
		    cin>>v[i];
		}
		int ans=0;
		for(int  i=0; i<2*n;i=i+2){
		    if(v[i+1]-v[i]>=2){
		        ans++;
		    }
		    else{
		        ans=ans+0;
		    }
		}
		cout<<ans<<endl;
// 	}  
}


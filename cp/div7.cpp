#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
	    int t;
	    cin>>t;
	    if(t%7==0){
	        cout<<t<<endl;
	    }
	    else{
	        cout<<t+7-t%7<<endl;
	    }
	}
}

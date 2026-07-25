#include <bits/stdc++.h> 
using namespace std;

int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int a;
		cin >> a;
		int b;
		cin>>b;
		if(a%b>0){
		    cout<<b-(a%b)<<endl;
		}
		else{
		    cout<<(a%b)<<endl;
		}
		
	}  
}


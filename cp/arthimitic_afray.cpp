#include<iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
	     int n;
	     cin>>n;
	     vector<int> v(n);
		 for(int  i=0; i<n;i++){
		    cin>>v[i];
		 }
		 int sum=0;
		 for(int  i=0; i<n;i++){
		    sum+=v[i];
		 }
		 if(sum==n){
		     cout<<0<<endl;
		 }
		 else if(sum<n){
		     cout<<1<<endl;
		 }
		 else if(sum>n){
		     cout<<sum-n<<endl;
		 }
		
	}  
}


#include<iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
	     int n;//appartment number
	     cin>>n;
	     vector<int> v(n);
		 for(int  i=0; i<n;i++){
		    cin>>v[i];
		 }
		 int mini=*min_element(v.begin(), v.end());
// 		 cout<<mini<<endl;
		 int self=0;
		 for(int i=0;i<n;i++){
		     self=self+v[i]-mini;
		  //   cout<<self<<endl;
		 }
		 cout<<self<<endl;
	     
	}  
}


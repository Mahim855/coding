#include<iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
// 	int testcases;
// 	cin>>testcases;
// 	while(testcases--){
		float n;
		cin>>n;
		vector<float> p(n);
		for(int i=0;i<n;i++){
		  cin>>p[i];
		}
		
		float per=100/n;
		float sum=0;
		for(int i=0;i<n;i++){
		  sum+=((p[i]/100)*per);
		  
		}
		cout<<sum<<endl;
	

	
// 	}  
}


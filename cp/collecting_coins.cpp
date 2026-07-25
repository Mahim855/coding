#include<iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
	     int a;
	     cin>>a;
	     int b;
	     cin>>b;
	     int c;
	     cin>>c;
	     int n;
	     cin>>n;
	     int net=a+b+c+n;
	     if(net%3==0){
	         cout<<"YES"<<endl;
	     }
	     else{
	         cout<<"NO"<<endl;
	     }
	     
	}  
}


#include<iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
	     int w;
         cin >> w;
         int h;
         cin >> h;
         int n;
         cin >> n;
         int sheet=1;
         while(w%2==0){
              w /= 2;
              sheet*=2;
         }
         while(h%2==0){
              h/= 2;
              sheet*=2;
         }
         if(sheet>=n){
             cout<<"YES"<<endl;
         }
         else{
             cout<<"NO"<<endl;
         }
         
	}  
}


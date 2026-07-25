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
	     int x;//per floor room kitne hai except 2nd floor
	     cin>>x;
	     int floor;
	     if(n<=2){
	         floor=1;
	     }
	     else if(n>2){
	         if((n-2)%x==0){
	             floor=((n-2)/x)+1;
	         }
	         else{
	             floor=((n-2)/x)+2;
	         }
	     }
	     cout<<floor<<endl;
	     
	}  
}


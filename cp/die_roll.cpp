#include<bits/stdc++.h>
using namespace std;
int main(){
	int y,w;
	cin>>y>>w;
	int c=max(y,w);
	int j=6-(c-1);
//	for(int i=1;i<7;i++){
//	    if(i>c){
//	        j++;
//	    }
//	}
   if(j==2 or j==4 or j==6){
   	    cout<<j/2<<"/6"<<endl;
   }
   else if(j==3){
   	 cout<<"1/2"<<endl;
   }
   else{
   	     cout<<(6-(c-1))<<"/6"<<endl;
   }	
}

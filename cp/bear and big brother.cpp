#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int count=0;
	while(a<=b){
	    count++;
//	    cout<<count<<endl;
		a=a*3;
		b=b*2;
//		cout<<a<<" "<<b<<endl;
	}
	cout<<count<<endl;
}

#include <bits/stdc++.h> 
using namespace std;

int main(){
// 	int testcases;
// 	cin>>testcases;
// 	while(testcases--){
		int x;
		cin>>x;
		int ans;
		int i=1;
		while(ans<=0){
		    int y=x+i;
		    int th=y/1000;
		    int hu=(y-(th*1000))/100;
		    int ten=(y-(th*1000)-(hu*100))/10;
		    int ones =y-(th*1000)-(hu*100)-(ten*10);
		    if(th!=hu && th!=ten && th!=ones && hu!=ten && hu!=ones && ones!=ten){
		        ans=x+i;
		    }
		    else{
		        i++;
		    }
		}
		cout<<ans<<endl;
		
// 	}  
}


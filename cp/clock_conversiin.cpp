#include <bits/stdc++.h> 
using namespace std;

int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
           string s1, s2;
           cin >> s1;
                if ((s1[0] ==0 && s1[1]>0) or (s1[0] == 1 && s1[1]==1) )
                {
                    cout << s1<<" "<<"AM"<<endl; 
                }
                else if(s1[0]>=1 && s1[1]>2){
                    cout << (s1[0]*10+s1[1])-12<<s1[2]<<s1[3]<<s1[4]<<" "<<"PM"<<endl;
                }
                else if(s1[0]==0 &&s1[1]==0){
                    cout<<12<<":"<<00<<"AM"<<endl;
                }
                else if(s1[0]==1 && s1[1]==2){
                    cout << s1<<" "<<"PM"<<endl;
                }
           
           return 0;
	}  
}


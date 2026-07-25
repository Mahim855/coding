//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n<=9){
//             cout<<n<<endl;
//         }
//         else if(9<n<=99){
//             cout<<9+floor(((n-10)/10)+1)<<endl;
//         }
//         else if(99<n<=999){
//             cout<<18+floor(((n-100)/100)+1)<<endl;
//         }
//         else if(999<n<=9999){
//             cout<<27+floor(((n-1000)/1000)+1)<<endl;
//         }
//         else if(9999<n<=99999){
//             cout<<36+floor(((n-10000)/10000)+1)<<endl;
//         }
//         else if(99999<n<=999999){
//             cout<<45+floor(((n-100000)/100000)+1)<<endl;
//         }
//     }
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
         string n;
         cin>>n;
         int i=n.size();
         int j=(i-1)*9+(n[0]-'0');
         cout<<j<<endl;
     }
}

#include<iostream>
using namespace std;
int main(){
    int  n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int c=0;
    for(int i=0;i<n;i++){
        c=c+min(abs(a[i]-b[i]),10-abs(a[i]-b[i]));
    }
    cout<<c<<endl;
}

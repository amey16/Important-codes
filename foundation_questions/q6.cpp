#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n,s=0,t=1;
    cin>>n;
    if(n>=2)
        cout<<"0 ";
    for(int i=2;t<n;i++){
        int k=t;
        t+=s;
        s=k;
        cout<<s<<" ";
    }
    // cout<<t<<endl;
    cout<<endl;
}
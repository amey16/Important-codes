#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n,s=0,t=1;
    cin>>n;
    if(n==1)
        cout<<"0"<<endl;
    else if(n==2)
        cout<<"1"<<endl;
    else{
        for(int i=2;i<n;i++){
            int k=t;
            t+=s;
            s=k;
        }
        cout<<t<<endl;
    }
}
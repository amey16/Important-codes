#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n,t=0,s=1,k;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<t<<" ";
            k=t;
            t+=s;
            s=k;
        }
        cout<<endl;
    }
}
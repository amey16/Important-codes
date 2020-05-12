#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x,k;
    cin>>x;
    for(k=0;k<n;k++){
        if(x==a[k])
            break;
    }
    if(k==n)
        cout<<"-1"<<endl;
    else
        cout<<k<<endl;
    
}
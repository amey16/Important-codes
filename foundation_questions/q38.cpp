#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    for(int i=0;i<n/2;i++){
        int val=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=val;
    }
    int inv[n],k;
    for(int i=0;i<n;i++){
        inv[b[i]]=i;
    }
    for(int k=0;k<n;k++){
        if(a[k]==inv[k])
            continue;
        else
            break;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(k==n)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}
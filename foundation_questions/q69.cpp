#include<iostream>
using namespace std;

bool isEle(int i,int e,int a[],int n){
    if(a[i]==e)
        return true;
    else if(i==n)
        return false;
    bool r=isEle(i+1,e,a,n);
    return r;
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int e;
    cin>>e;
    cout<<isEle(0,e,a,n)<<endl;
}

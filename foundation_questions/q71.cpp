#include<iostream>
using namespace std;

int findIndex(int i,int a[],int n,int ele){
    if(i==n)
        return -1;
    else if(a[n-1-i]==ele)
        return n-1-i;
    int in=findIndex(i+1,a,n,ele);
    return in;
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ele;
    cin>>ele;
    cout<<findIndex(0,a,n,ele)<<endl;
}
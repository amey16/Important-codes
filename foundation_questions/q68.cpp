#include<iostream>
using namespace std;

bool isSorted(int i,int a[],int n){
    if(i==n-1)
        return true;
    if(a[i]>a[i+1])
        return false;
    bool r=isSorted(i+1,a,n);
    return r;
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    bool d=isSorted(0,a,n);;
    cout<<d<<endl;
}
#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int t;
    cin>>t;
    sort(a,a+n);
    int i=0,j;
    while(i<n && a[i]<t){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==t)
                break;
        }
        if(j!=n)
            cout<<a[i]<<" "<<a[j]<<endl;
        i++;
    }
}
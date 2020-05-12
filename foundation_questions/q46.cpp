#include<iostream>
#include<climits>
using namespace std;

int main(int argc,char** argv){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,max_now=0,max_sf=INT_MIN;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int j=0;j<n;j++){
            max_now+=a[j];
            if(max_now<0)
                max_now=0;
            if(max_sf<max_now)
                max_sf=max_now;
        }
        cout<<max_sf<<endl;
    }
}
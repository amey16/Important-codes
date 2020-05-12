#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void intersection(int a[],int b[],int n,int m){
    vector<int> g;
    int i=0,j=0;
    sort(a,a+n);
    sort(b,b+m);
    // for(int i=0;i<n;i++)
    //     cout<<a[i]<<" ";
    // cout<<endl;

    //   for(int i=0;i<m;i++)
    //     cout<<b[i]<<" ";
    // cout<<endl;
    while(j<m && i<n){
        if(a[i]==b[j]){
            g.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j])
            j++;
        else
            i++;
    }
    for(auto i=g.begin();i!=g.end();++i) 
        cout<<*i<<" ";
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
    intersection(a,b,n,m);
    // for(auto i=inter.begin();i!=inter.end();++i) 
        // cout<<*i<<" ";
}
#include<iostream>
#include<climits>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int max=INT_MIN;
    for(int i=0;i<n;i++)
        if(a[i]>max)
            max=a[i];
    cout<<max<<endl;
}
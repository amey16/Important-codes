#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n],b[n],inv[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        inv[a[i]]=i;
    }
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int j=0;j<n;j++){
        if(b[j]!=inv[j]){
            cout<<"false"<<endl;
            return 0;
        }
    }
    cout<<"true"<<endl;
    
    
}
#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n,t=1;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<t<<" ";
            t++;
        }
        cout<<endl;
    }
}
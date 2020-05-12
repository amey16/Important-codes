#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n,val=1;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<val<<" ";
            val*=(i-j);
            val/=(j+1);
        }
        val=1;
        cout<<endl;
    }
}
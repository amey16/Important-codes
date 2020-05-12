#include<iostream>
using namespace std;

// int val=1;
void pascalTriangle(int r,int c,int n,int val){
    if(r==n)
        return;
    if(c<=r){
        cout<<val<<" ";
        pascalTriangle(r,c+1,n,val*(`r-c)/(c+1));
        return;
        // cout<<endl;
    }
    cout<<endl;
    pascalTriangle(r+1,0,n,1);
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    int val=1;
    pascalTriangle(0,0,n,val);
}
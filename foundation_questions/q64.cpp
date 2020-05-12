#include<iostream>
using namespace std;

void printTriangle(int r,int c,int n){
    if(r==n)
        return;
    if(c<=r){
        cout<<"*";
        printTriangle(r,c+1,n);
        return;
        // cout<<endl;
    }
    cout<<endl;
    printTriangle(r+1,0,n);
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    printTriangle(0,0,n);
}
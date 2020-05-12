#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n,k;
    cin>>n>>k;
    cout<<int((1<<k)|n)<<endl;
}
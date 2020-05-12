#include<iostream>
using namespace std;

int sum(int n,int s){
    if(n==0)
        return s;
    sum(n-1,s+n);
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    cout<<sum(n,0)<<endl;
}
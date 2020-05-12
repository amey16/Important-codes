#include<iostream>
using namespace std;

int pow1(int b,int p){
    int n=1;
    for(int i=0;i<p;i++)
        n*=b;
    return n;
}
int main(int argc,char** argv){
    int n,r;
    cin>>n>>r;
    int temp=n,len=0;
    for(len=0;temp!=0;len++)
        temp/=10;
    r=(r+len)%len;
    int new_no=(n%pow1(10,len-r))*pow1(10,r)+(n/pow1(10,len-r));
    cout<<new_no<<endl;
}
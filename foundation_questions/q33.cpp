#include<iostream>
using namespace std;

int computeXOR(int n){
    if(n%4==0)
        return n;
    else if(n%4==1)
        return 1;
    else if(n%4==2)
        return n+1;
    return 0;
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    cout<<computeXOR(n)<<endl;
}
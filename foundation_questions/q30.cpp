#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    while(n!=1){
        if(n%2!=0)
            break;
        n/=2;
    }
    if(n==1)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
}
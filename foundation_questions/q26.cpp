#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n,d;
    cin>>n>>d;
    int cnt=0;
    while(n!=0){
        if(d==n%10)
            cnt++;
        n/=10;
    }
    cout<<cnt<<endl;
}
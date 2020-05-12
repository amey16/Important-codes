#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int cnt=0;
    for (int i=0;i<=n;i++)
        if((n+i)==(n^i))
            cnt++;
    cout<<cnt<<endl;
}
#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n1,n2;
    cin>>n1>>n2;
    while(n2%n1!=0){
        int k=n2;
        n2=n1;
        n1=k%n1;
    }
    cout<<n1<<endl;
}
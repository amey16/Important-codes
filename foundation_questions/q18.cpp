#include<iostream>
using namespace std;

int gcd(int n1,int n2){
    while(n2%n1!=0){
        int k=n2;
        n2=n1;
        n1=k%n1;
    }
    return n1;
}
int main(int argc,char** argv){
    int n1,n2;
    cin>>n1>>n2;
    int g=gcd(n1,n2);
    int l=(n1*n2)/g;
    cout<<"gcd="<<g<<",lcm="<<l<<endl;
}
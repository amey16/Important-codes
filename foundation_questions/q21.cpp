#include<iostream>
#include<cmath>
using namespace std;

int pow1(int b,int p){
    int n=1;
    for(int i=0;i<p;i++)
        n*=b;
    return n;
}
int armstrong(int n){
    int len=0,num=n,arm_n=0;
    for(len=0;num!=0;len++)
        num/=10;
    while(n!=0){
        arm_n+=pow1(n%10,len);
        // cout<<arm_n<<" "<<pow(n%10,len)<<endl;
        n/=10;
    }
    // cout<<arm_n<<endl;
    return arm_n;
}
int main(int argc,char** argv){
    int n,sr,er;
    cin>>n>>sr>>er;
    // armstrong(n);
    // cout<<armstrong(n)<<endl;
    if(n==armstrong(n))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    for(int i=sr;i<er;i++){
        if(i==armstrong(i))
            cout<<i<<" ";
        else
            continue;
    }
    cout<<endl;
}
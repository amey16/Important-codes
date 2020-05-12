#include<iostream>
#include<cmath>
using namespace std;
int pow1(int b,int p){
    int n=1;
    for(int i=0;i<p;i++)
        n*=b;
    return n;
}
int b1_dec(int n,int b1){
    int len=0,new_n=0;
    while(n!=0){
        new_n+=((n%10)*pow1(b1,len));
        n/=10;
        len++;
    }
    return new_n;
}
int dec_b2(int n,int b2){
    int len=0,new_n=0;
    while(n!=0){
        new_n+=((n%b2)*pow1(10,len));
        n/=b2;
        len++;
    }
    return new_n;
}
int main(int argc,char** argv){
    int n,b1,b2;
    cin>>n>>b1>>b2;
    int nd=b1_dec(n,b1);
    cout<<n<<" base "<<b1<<" = "<<dec_b2(nd,b2)<<" base "<<b2<<endl;

}
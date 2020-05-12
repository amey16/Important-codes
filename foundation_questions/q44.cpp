#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
        cin>>a1[i];
    int m;
    cin>>m;
    int b1[m];
    for(int i=0;i<m;i++)
        cin>>b1[i];
    int carry=0,a,b,digit,sum;
    int o=(m>n)?m:n;
    int c[o+1];
    for(int i=0;i<=o;i++){
        a=n-1-i;
        b=m-1-i;
        if(a>=0 && b>=0)
            sum=a1[n-i-1]+b1[m-i-1]+carry;
        else if(a>=0 && b<0)
            sum=a1[n-i-1]+carry;
        else if(a<0 && b>=0)
            sum=b1[m-i-1]+carry;
        else
            sum=carry;
        digit=sum%10;
        carry=sum/10;
        c[o-i]=digit;
    }
    for(int i=0;i<=o;i++)
        cout<<c[i]<<" ";
    cout<<endl;
}
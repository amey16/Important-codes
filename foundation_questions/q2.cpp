#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n,j;
    cin>>n;
    if(n<2)
        return 0;
    else if(n==2)
        cout<<"2"<<endl;
    else{
        cout<<2<<" ";
        for(int i=3;i<=n;i+=2){
            for(j=3;j<i;j+=2){
                if(i%j==0)
                    break;
            }
            if(j==i || j==i+1)
                cout<<i<<" ";
            else
                continue;
        }
    }
    cout<<endl;
}
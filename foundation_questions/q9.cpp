#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    int spaces=1;
    int stars=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<stars;j++)
            cout<<"*";
        for(int j=0;j<spaces;j++)
            cout<<" ";
        for(int j=0;j<stars;j++)
            cout<<"*";
        if(i<=n/2){
            stars-=1;
            spaces+=2;
        }
        else
        {
            stars+=1;
            spaces-=2;
        }
        cout<<endl;
    }
}
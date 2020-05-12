#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    int spaces=n/2;
    int stars=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<spaces;j++)
            cout<<" ";
        for(int j=0;j<stars;j++)
            cout<<"*";
        for(int j=0;j<spaces;j++)
            cout<<" ";
        if(i>n/2){
            spaces+=1;
            stars-=2;
        }
        else{
            spaces-=1;
            stars+=2;
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    int spaces=n-1,stars=1;
    int val=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<spaces;j++){
            cout<<"  ";
        }
        for(int j=0;j<stars;j++){
            cout<<val<<" ";
            if(j<i-1)
                val++;
            else
                val--;
        }
        val+=2;
        for(int j=0;j<spaces;j++){
            cout<<"  ";
        }
        cout<<endl;
        stars+=2;
        spaces-=1;
    }
}
#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    int stars=1,val=0;
    int spaces=2*(n-1)-1;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<stars;j++){
            val++;
            cout<<val<<" ";
        }
        for(int j=0;j<spaces;j++)
            cout<<"  ";
        for(int j=0;j<stars;j++){
            cout<<val<<" ";
            val--;
        }
        val=0;
        spaces-=2;
        stars+=1;
        cout<<endl;
    }
    val+=1;
    for(int i=0;i<2*n-1;i++){
        cout<<val<<" ";
        if(i<n-1)
            val++;
        else
            val--;
    }
}
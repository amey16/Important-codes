#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int r,c;
    cin>>r>>c;
    int a[r][c],b[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>b[i][j];
    int sum=0;
    for(int i=0;i<r && i<c;i++)
            sum+=(a[i][i]+b[i][i]);
    cout<<sum<<endl;
}
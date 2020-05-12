//sadal point

#include<iostream>
#include<climits>
using namespace std;

int main(int argc,char** argv){
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];
    int cnt=0,min=INT_MAX,k,l,max=INT_MIN;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(min>a[i][j]){
                min=a[i][j];
                k=j;
            }
        }
        for(int j=0;j<r;j++){
            if(max<a[j][k]){
                max=a[j][k];
                l=j;
            }
        }
        if(max==min){
            cnt++;
            cout<<a[l][k]<<endl;
        }
        min=INT_MAX;
        max=INT_MIN;
    }
    if(cnt==0)
        cout<<"Sadal point doesn't exist"<<endl;
}
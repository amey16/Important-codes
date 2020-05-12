#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];
    int low_r=0,low_c=0,high_c=c-1,high_r=r-1;
    int counter=1,noe=r*c;
    while(counter<=noe){
        for(int i=low_c;i<=high_c && counter<=noe;i++){
            cout<<a[low_r][i]<<" ";
            counter++;
        }
        low_r++;
        for(int i=low_r;i<=high_r && counter<=noe;i++){
            cout<<a[i][high_c]<<" ";
            counter++;
        }
        high_c--;
        for(int i=high_c;i>=low_c && counter<=noe;i--){
            cout<<a[high_r][i]<<" ";
            counter++;
        }
        high_r--;
        for(int i=high_r;i>=low_r && counter<=noe;i--){
            cout<<a[i][low_c]<<" ";
            counter++;
        }
        low_c++;
    }
    cout<<endl;
}
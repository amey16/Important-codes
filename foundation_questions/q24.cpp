#include<iostream>
#include<climits>
using namespace std;

int main(int srgc,char** argv){
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++){
        cin>>n;
        int x[n],y[n];
        for(int j=0;j<n;j++)
            cin>>x[i];
        for(int j=0;j<n;j++)
            cin>>y[i];
        int sl;
        if(x[1]-x[0]!=0)
            sl=(y[1]-y[0])/(x[1]-x[0]);
        else
            sl=INT_MAX;
        int cnt=2;
        for(int j=1;j<n-1;j++){
            int new_sl;
            if(x[j+1]-x[j]!=0)
                new_sl=(y[j+1]-y[j])/(x[j+1]-x[j]);
            else
                new_sl=INT_MAX;
            if(new_sl==sl)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}
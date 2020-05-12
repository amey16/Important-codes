#include<iostream>
#include<cmath>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++)
        cin>>y[i];
    int d[n];
    for(int i=0;i<n;i++){
        d[i]=sqrt((x[i]*x[i])+(y[i]*y[i]));
    }
    int q;
    cin>>q;
    int que;
    for(int i=0;i<q;i++){
        cin>>que;
        for(int j=0;j<n;j++){
            if(d[j]<que)
                cout<<x[j]<<","<<y[j]<<endl;
        }
        cout<<endl;
    }
}
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int counter=0;
    while(counter<(int)pow(2,n)){
        int temp=counter;
        for(int i=0;i<n;i++){
            int rem=temp%2;
            if(rem==1)
                cout<<a[i]<<" ";
            temp=temp/2;
        }
        counter++;
        cout<<endl;
    }
}
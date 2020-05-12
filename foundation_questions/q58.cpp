#include<iostream>
#include<cmath>
using namespace std;

int main(int argc,char** argv){
    string s;
    cin>>s;
    int t=pow(2,s.length());
    // cout<<t<<endl;
    int cnt=0,len=0;
    while(cnt<t){
        int c=cnt;
        do{
            if(c%2==1)
                cout<<s[len];
            len++;
            c/=2;
        }while(c!=0);
        cnt++;
        len=0;
        cout<<endl;
    }
}
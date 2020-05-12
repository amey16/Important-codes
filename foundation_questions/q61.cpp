#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    string s,st="";
    cin>>s;
    st+=s[0];
    for(int i=1;i<s.length();i++)
        if(s[i]==s[i-1])
            continue;
        else
            st+=s[i];
    cout<<st<<endl;
}
#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    string s;
    cin>>s;
    string sn="";
    sn.push_back(s[0]);
    for(int i=0;i<s.length()-1;i++){
        int cnt=s[i+1]-s[i];
        sn+=to_string(cnt);
        sn.push_back(s[i+1]);
    }
    cout<<sn<<endl;
}
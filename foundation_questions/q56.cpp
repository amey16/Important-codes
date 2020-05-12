#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    string s,sn="";
    cin>>s;
    int i=0;
    while(i<s.length()){
        char c=(char)(s[i]+1);
        sn.push_back(c);
        i++;
        c=(char)(s[i]-1);
        sn.push_back(c);
        i++;
    }
    cout<<sn<<endl;
}
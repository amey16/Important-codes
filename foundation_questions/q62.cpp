#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    int a[26];
    for(int i=0;i<26;i++)
        a[i]=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        a[(int)(s[i]-'a')]++;
    for(int i=0;i<26;i++){
        if(a[i]==0)
            continue;
        else if(a[i]==1)
            cout<<(char)(i+'a');
        else
            cout<<(char)(i+'a')<<a[i];
    }
    cout<<endl;
}
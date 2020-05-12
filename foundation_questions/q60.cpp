#include<iostream>
#include<string>
#include<climits>
using namespace std;
#define size 26

int main(int argc,char** argv){
    string s;
    cin>>s;
    int a[size];
    for(int i=0;i<26;i++)
        a[i]=0;
    for(int i=0;i<s.length();i++)
        a[(int)(s[i]-'a')]++;
    int k,max=-1;
    for(int i=0;i<26;i++)
        if(max<a[i]){
            max=a[i];
            k=i;
        }
    cout<<(char)(k+'a')<<endl;
}
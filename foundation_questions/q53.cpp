#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    string str;
    cin>>str;
    int i;
    for(i=0;i<str.length()/2;i++)
        if(str[i]!=str[str.length()-1-i])
            break;
    if(i==str.length()/2 || i==str.length()/2+1)
        cout<<"palindrome"<<endl;
    else
        cout<<"not palindrome"<<endl;
}
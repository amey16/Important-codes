#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    string str,str_n;
    cin>>str;
    for(int i=0;i<str.length();i++){
        char c=str[i];
        if(c>='A' && c<='Z'){
            char ch=(char)(c-'A'+'a');
            str_n.push_back(ch);
        }
        else if(c>='a' && c<='z'){
            char ch=(char)(c-'a'+'A');
            str_n.push_back(ch);
        }
    }
    cout<<str_n<<endl;
}
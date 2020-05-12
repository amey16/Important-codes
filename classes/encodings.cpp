#include<iostream>
#include<string>
using namespace std;

void encodings(string s,string csf){
    if(s.length()==0){
        cout<<csf<<endl;
        return;
    }
    else if(s.length()==1){
        char ch0=s[0];
        string ros=s.substr(1,s.length()-1);
        if(ch0!='0'){
            int c=ch0-48;
            char ch='a'+c-1;
            encodings(ros,csf+ch);
        }
    }
    else{
        char ch0=s[0];
        string ros=s.substr(1,s.length()-1);
        if(ch0!='0'){
            int c=ch0-48;
            char ch='a'+c-1;
            encodings(ros,csf+ch);
        }
        char ch1=s[1];
        string ros1=s.substr(2,s.length()-2);
        if(ch1!='0'){
            int c=10*(ch0-48)+(ch1-48);
            if(c>=10 && c<=26){
                char ch='a'+c-1;
                encodings(ros1,csf+ch);
            }
        }
    }
}
int main(int argc,char** argv){
    encodings("1123","");
}
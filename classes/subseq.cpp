<<<<<<< HEAD
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void pss(string s,string asf){
    if(s.length()==0){
        cout<<asf<<endl;
        return;
    }
    char ch=s[0];
    string subs=s.substr(1,s.length()-1);
    pss(subs,asf+ch);
    pss(subs,asf);
}
int main(int argc,char** argv){
    string s;
    cin>>s;
    pss(s,"");
=======
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void pss(string s,string asf){
    if(s.length()==0){
        cout<<asf<<endl;
        return;
    }
    char ch=s[0];
    string subs=s.substr(1,s.length()-1);
    pss(subs,asf+ch);
    pss(subs,asf);
}
int main(int argc,char** argv){
    string s;
    cin>>s;
    pss(s,"");
>>>>>>> 38d8b638e268b24ee405b99aa2d694169bd30081
}
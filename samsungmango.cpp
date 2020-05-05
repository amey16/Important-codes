#include<iostream>
#include<unordered_set>
using namespace std;

void wordbreak(string ques,string ans,unordered_set<string>& dictionary){
    if(ques.length()==0){
        cout<<ans.substr(1,ans.length()-1)<<endl;
        return;
    }
    for(int i=1;i<=ques.length();i++){
        string prefix=ques.substr(0,i);
        if(dictionary.count(prefix)==1){
            string roq=ques.substr(i,ques.length()-prefix.length());
            wordbreak(roq,ans+'-'+prefix,dictionary);
        }
    }
}
int main(int argc,char** argv){
    unordered_set<string> dictionary;
    dictionary.insert("man");
    dictionary.insert("go");
    dictionary.insert("mango");
    dictionary.insert("ice");
    dictionary.insert("cream");
    dictionary.insert("icecream");
    dictionary.insert("sam");
    dictionary.insert("sung");
    dictionary.insert("samsung");
    wordbreak("mangoicecreamsamsung","",dictionary);
}
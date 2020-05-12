#include<iostream>
#include<string>
#include<vector>
using namespace std;
string s1,s2,s3;
int getnumber(string s,vector<int>& map){
    int num=0;
    int pv=1;
    for(int i=s.length()-1;i>=0;i--){
        num+=pv*map[(int)(s[i]-97)];
        pv*=10;
    }
    return num;
}
void generatenumbers(string unique,vector<bool> &takenos,vector<int> &map){
    if(unique.length()==0){
        int n1=getnumber(s1,map);
        int n2=getnumber(s2,map);
        int n3=getnumber(s3,map);
        // cout<<n1<<" "<<n2<<" "<<n3<<endl;
        if(n1+n2==n3){
            for(int i=0;i<26;i++){
                if(map[i]!=-1){
                    cout<<(char)(i+97)<<"=="<<map[i]<<" ";
                }
            }
            cout<<endl;
        }
        return;
    }
    char ch=unique[0];
    string ros=unique.substr(1,unique.length()-1);
    for(int i=0;i<=9;i++){
        if(takenos[i]==false){
            map[(int)(ch-97)]=i;
            takenos[i]=true;
            generatenumbers(ros,takenos,map);
            map[(int)(ch-97)]=-1;
            takenos[i]=false;
        }
    }

}
string unique(string a,string b,string c){
    vector<bool> letters(26,false);
    string uni="";
    for(int i=0;i<a.length();i++){
        if(letters[(int)(a[i]-97)]==false){
            uni+=a[i];
            letters[(int)(a[i]-97)]=true;
        }
    }
    for(int i=0;i<b.length();i++){
        if(letters[(int)(b[i]-97)]==false){
            uni+=b[i];
            letters[(int)(b[i]-97)]=true;
        }
    }
    for(int i=0;i<c.length();i++){
        if(letters[(int)(c[i]-97)]==false){
            uni+=c[i];
            letters[(int)(c[i]-97)]=true;
        }
    }
    return uni;
}
int main(int argc,char** argv){
    cin>>s1;
    cin>>s2;
    cin>>s3;

    string u=unique(s1,s2,s3);
    // cout<<u<<endl;
    vector<int> map(26,-1);
    vector<bool> takenos(10,false);
    generatenumbers(u,takenos,map);

}
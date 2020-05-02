#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> gsp(int src){
    if(src==0){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    if(src<0){
        vector<string> bres;
        return bres;
    }
    vector<string> stod;
    for(int step=1;step<=3;step++){
        int nbr=src-step;
        vector<string> ntod=gsp(nbr);
        for(int i=0;i<ntod.size();i++){
            string ntodpath=ntod[i];
            string stodpath=to_string(step)+ntodpath;
            stod.push_back(stodpath);
        }
    }
    return stod;
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    vector<string> ans=gsp(n);
    for(string val:ans)
        cout<<val<<endl;
    return 0;
}
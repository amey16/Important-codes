#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> gmp(int sr,int sc,int dr,int dc){
    if(sr==dr && sc==dc){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    vector<string> paths;
    if(sr<dr){
        vector<string> nh=gmp(sr+1,sc,dr,dc);
        for(int i=0;i<nh.size();i++){
            paths.push_back("h"+nh[i]);
        }
    }
    if(sc<dc){
        vector<string> nv=gmp(sr,sc+1,dr,dc);
        for(int i=0;i<nv.size();i++){
            paths.push_back("v"+nv[i]);
        }
    }
    return paths;
}
int main(int argc,char** arv){
    int r,c;
    cin>>r>>c;
    vector<string> ans=gmp(0,0,r,c);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
}
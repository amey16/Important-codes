<<<<<<< HEAD
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> gmmp(int sr,int sc,int dr,int dc){
    if(sr==dr && sc==dc){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    vector<string> path;
    for(int ms=1;ms<=dr-sr;ms++){
        vector<string> nh=gmmp(sr+ms,sc,dr,dc);
        for(int i=0;i<nh.size();i++){
            path.push_back("h"+to_string(ms)+nh[i]);
        }
    }
    for(int ms=1;ms<=dc-sc;ms++){
        vector<string> nv=gmmp(sr,sc+ms,dr,dc);
        for(int i=0;i<nv.size();i++)
            path.push_back("v"+to_string(ms)+nv[i]);
    }
    for(int ms=1;ms<=dc-sc && ms<=dr-sr;ms++){
        vector<string> nd=gmmp(sr+ms,sc+ms,dr,dc);
        for(int i=0;i<nd.size();i++)
            path.push_back("d"+to_string(ms)+nd[i]);
    }
    return path;
}
int main(int argc,char** argv){
    int r,c;
    cin>>r>>c;
    vector<string> ans=gmmp(0,0,r-1,c-1);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
=======
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> gmmp(int sr,int sc,int dr,int dc){
    if(sr==dr && sc==dc){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    vector<string> path;
    for(int ms=1;ms<=dr-sr;ms++){
        vector<string> nh=gmmp(sr+ms,sc,dr,dc);
        for(int i=0;i<nh.size();i++){
            path.push_back("h"+to_string(ms)+nh[i]);
        }
    }
    for(int ms=1;ms<=dc-sc;ms++){
        vector<string> nv=gmmp(sr,sc+ms,dr,dc);
        for(int i=0;i<nv.size();i++)
            path.push_back("v"+to_string(ms)+nv[i]);
    }
    for(int ms=1;ms<=dc-sc && ms<=dr-sr;ms++){
        vector<string> nd=gmmp(sr+ms,sc+ms,dr,dc);
        for(int i=0;i<nd.size();i++)
            path.push_back("d"+to_string(ms)+nd[i]);
    }
    return path;
}
int main(int argc,char** argv){
    int r,c;
    cin>>r>>c;
    vector<string> ans=gmmp(0,0,r-1,c-1);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
>>>>>>> 38d8b638e268b24ee405b99aa2d694169bd30081
}
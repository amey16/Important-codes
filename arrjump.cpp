#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> gsp2(vector<int> a,int idx){
    if(idx==a.size()-1){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    vector<string> stod;
    for(int i=1;i<=a[idx];i++){
        int nbr=idx+i;
        if(nbr<a.size()){
            vector<string> ntod=gsp2(a,nbr);
            for(int j=0;j<ntod.size();j++)
                stod.push_back(to_string(idx)+" "+ntod[j]);
        }
    }
    return stod;
}
int main(int argc,char** argv){
    int b;
    // cin>>n;
    vector<int> a {3,2,0,4,1,2,0,2,3,0,1};
    // for(int i=0;i<n;i++){
    //     cin>>b;
    //     a.push_back(b);
    // }
    vector<string> ans=gsp2(a,0);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]+"10"<<endl;
}
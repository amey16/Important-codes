#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int s[n],cnt=0;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n-1;i++){
        if(cnt==2)
            break;
        else if(s[i+1]<s[i] && cnt==0)
            continue;
        else if(s[i+1]>s[i] && cnt==0){
            cnt++;
            continue;
        }
        else if(s[i+1]<s[i] && cnt==1){
            cnt++;
            continue;
        }
        else
        {
            continue;
        }
        
    }
    if(cnt==2)
        cout<<"False"<<endl;
    else
        cout<<"True"<<endl;
    
}
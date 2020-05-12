#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int a,d,r,n;
    cin>>a>>d>>r>>n;
    int fap=a,fgp=a,fagp=a;
    int sap=0,sgp=0,sagp=0;
    for(int i=0;i<n;i++){
        sap+=fap;
        sgp+=fgp;
        sagp+=fagp;
        if(i!=n-1){
            fap+=d;
            fgp*=r;
            fagp=(fgp*fap)/a;
        }
    }
    cout<<fap<<" "<<fgp<<" "<<fagp<<" "<<sap<<" "<<sgp<<" "<<sagp<<endl;
}
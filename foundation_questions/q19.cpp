#include<iostream>
using namespace std;

int facc(int n){
    if(n==0 || n==1)
        return 1;
    int new_n=1;
    while(n!=1){
        new_n*=n;
        n--;
    }
    return new_n;
}
int main(int argc,char** argv){
    int n,r;
    cin>>n>>r;
    int nfac=facc(n);
    int npr=nfac/facc(n-r);
    int ncr=npr/facc(r);
    cout<<nfac<<" "<<npr<<" "<<ncr<<endl;
}
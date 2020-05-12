#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int odd_s=0,even_s=0;
    while(n!=0){
        odd_s+=n%10;
        n/=10;
        if(n!=0){
            even_s+=n%10;
            n/=10;
        }
        else
            break;        
    }
    cout<<odd_s<<"  "<<even_s<<endl;
}
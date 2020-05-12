#include<iostream>
#include<cstdio>
using namespace std;

int sqrt_wp(int n){
    int sq=0;
    for(sq=0;sq*sq<=n;sq++);
    return sq-1;
}
double sqrt_p(int n,int p){
    int cnt=0;
    double sqrt=0.0;
    double inc=1.0;
    while(cnt<=p){
        while(sqrt*sqrt<=n)
            sqrt+=inc;
        sqrt-=inc;
        inc*=0.1;
        cnt++;
    }
    return sqrt;
}
int main(int argc,char** argv){
    int n,p;
    cin>>n>>p;
    cout<<sqrt_wp(n)<<endl;
    printf("%.8f\n",sqrt_p(n,p));

}
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void coinchangeperm(int amt,string asf ,vector<int>& coins){
    if(amt==0){
        cout<<asf<<endl;
        return;
    }
    for(int i=0;i<coins.size();i++){
        if(amt-coins[i]>=0){
            coinchangeperm(amt-coins[i],asf+to_string(coins[i]),coins);
        }
    }
}
void coinchangecom(int amt,string asf ,int l,vector<int>& coins){
    if(amt==0){
        cout<<asf<<endl;
        return;
    }
    for(int i=l;i<coins.size();i++){
        if(amt-coins[i]>=0){
            coinchangecom(amt-coins[i],asf+to_string(coins[i]),i,coins);
        }
    }
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    vector<int> a {2,3,5,6};
    coinchangecom(n,"",0,a);
    return 0;
}
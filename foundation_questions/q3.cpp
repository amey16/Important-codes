#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    int num=n;
    int new_n=0;
    for(int i=0;num!=0;i++){
        new_n=new_n*10+num%10;
        num/=10;
    }
    cout<<"reverse of "<<n<<" is "<<new_n<<endl;
}
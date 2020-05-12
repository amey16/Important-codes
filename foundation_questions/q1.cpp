#include<iostream>
using namespace std;
int main(int argc,char** argv){}
    int n;
    cin>>n;
    int div = 2;
    while(div * div <= n){
        if(n % div == 0){
            cout<<"Not prime"<<endl;
            return;
        }
        div++;
    }
    cout<<"Prime"<<endl;
}

#include<iostream>
using namespace std;
int main(int argc,char** argv){
    int n;
    cin>>n;
    int spaces=n/2,stars=1;
    int val=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<val<<" ";
            if(j==stars)
                break;
            else if(j<=stars/2)
                val++;
            else
                val--;
        }
        // for(int j=0;j<spaces;j++){
        //     cout<<"  ";
        // }
        cout<<endl;
        if(i<=n/2){
            stars+=2;
            spaces-=1;
            val+=1;
        }
        else{
            stars-=2;
            spaces+=1;
            val-=1;
        }
    }
}
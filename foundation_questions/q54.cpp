#include<iostream>
using namespace std;

int main(int argc,char** argv){
    string str;
    cin>>str;
    int cnt=0;
    for(int index=0;index<str.length();index++){
        for(int len=1;len<=str.length()-index;len++){
            int i=0;
            for(i=0;i<len/2;i++)
                if(str[index+i]!=str[index+len-1-i])
                    break;
            if(i==len/2 || i==len/2+1)
            {
                int k=0;
                while(k<len){
                    cout<<str[index+k];
                    k++;
                }
                cnt++;
                cout<<endl;
            }
        }
    }
    cout<<cnt<<endl;
}
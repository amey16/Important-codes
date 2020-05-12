#include<iostream>
#include<string>
using namespace std;

int main(int argc,char** argv){
    int i=0;
    char s;
    do{
        int n1,n2;
        cin>>s;
        if(s=='+')
            goto a;
        else if(s=='-')
            goto a;
        else if(s=='%')
            goto a;
        else if(s=='*')
            goto a;
        else if(s=='/')
            goto a;
        else if(s=='x' || s=='X')
            break;
        else{
                cout<<"Invalid operation. Try again."<<endl;
                continue;
        }
        a:
        cin>>n1>>n2;
        if(s=='+'){
            int a=n1;
            int b=n2;
            cout<<a+b<<endl;
        }
        else if(s=='-'){
            int a=n1;
            int b=n2;
            cout<<a-b<<endl;
        }
        else if(s=='*'){
            int a=n1;
            int b=n2;
            cout<<a*b<<endl;
        }
        else if(s=='/'){
            int a=n1;
            int b=n2;
            cout<<a/b<<endl;
        }
        else if(s=='%'){
            int a=n1;
            int b=n2;
            cout<<a%b<<endl;
        }
        
    }
    while(s!='X' || s!='x');
}
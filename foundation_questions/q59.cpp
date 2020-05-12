//permutatins of a string
//used recursion instead of iteration
#include<iostream>
using namespace std;

void swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
void permute(string s,int i,int f){
    if(i==f)
        cout<<s<<endl;
    else{
        for(int j=i;j<=f;j++){
            swap(s[i],s[j]);
            permute(s,i+1,f);
            swap(s[i],s[j]);
        }
    }
}
int main(int argc,char** argv){
    string s;
    cin>>s;
    permute(s,0,s.length()-1);
}
#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int t;
    cin>>t;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        int s=t-a[i];
        int left=i+1,right=n-1;
        while(left<right){
            if(a[left]+a[right]==s){
                cout<<a[i]<<" "<<a[left]<<" "<<a[right]<<endl;
                left++;
                right--;
            }
            else if(a[left]+a[right]>s)
                right--;
            else
                left++;
        }
    }
}
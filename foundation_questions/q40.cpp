#include<iostream>
using namespace std;

int swap(int *a,int *b){
    int tp=*a;
    *a=*b;
    *b=tp;
}
int* bubble_sort(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(a[j]<a[j-1])
                swap(&a[j],&a[j-1]);
        }
    }
    return a;
}
int* insertion_sort(int *a,int n){
    int i,key,j;  
    for(i=n-1;i>=0;i--){
        key=a[i];  
        j=i+1;  
        while(j<n && a[j]>key){
            a[j-1]=a[j];  
            j=j+1;  
        }  
        a[j-1]=key;  
    }
    return a;
}
int* selection_sort(int* a,int n){
    for(int i=0;i<n-1;i++){
        int k=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[k])
                k=j;
        }
        swap(&a[k],&a[i]);
    }
    return a;
} 
int main(int argc,char** argv){
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    int *sorted;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
        cin>>c[i];    
    sorted=bubble_sort(a,n);
    for(int i=0;i<n;i++)
        cout<<*(sorted+i)<<" ";
    cout<<endl;

    sorted=insertion_sort(b,n);
    for(int i=0;i<n;i++)
        cout<<*(sorted+i)<<" ";
    cout<<endl;

    sorted=selection_sort(c,n);
    for(int i=0;i<n;i++)
        cout<<*(sorted+i)<<" ";
    cout<<endl;
}
#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int r,c,c2;
    cin>>r>>c>>c2;
    int a[r][c],b[c][c2];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];
    
    for(int i=0;i<c;i++)
        for(int j=0;j<c2;j++)
            cin>>b[i][j];

  	int rv[r][c2];
  	for(int i=0;i<r;i++){
  		for(int j=0;j<c2;j++){
  			for(int k=0;k<c;k++){
  				rv[i][j]=rv[i][j]+a[i][k]*b[k][j];
  			}
  	        cout<<rv[i][j]<<" ";
  		}
  		cout<<endl;
	}
}
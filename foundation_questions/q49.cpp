#include<iostream>
using namespace std;

int main(int argc,char** argv){
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];
    int dir=0,row=0,col=0;
    while(true){
		dir=(dir+a[row][col])%4;
		if(dir==0){
			col++;
			if(col==c){
				cout<<row<<","<<col;
				break;
			}
		}
        else if(dir==1){
			row++;
			if(row==r){
				cout<<row<<","<<col;
				break;
			}
    	} 
        else if(dir==2){
			col--;
			if(col==-1){
				cout<<row<<",0";
				break;
			}
		}
        else if(dir==3){
			row--;
			if(row==-1){
				cout<<"0,"<<col;
				break;
			}
		}
	}
}
#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isKnightSafe(vector<vector<bool>>& board,int r,int c){
    if(r-1>=0 && c-2>=0 && board[r-1][c-2]==true)
        return false;
    else if(r-2>=0 && c-1>=0 && board[r-2][c-1]==true)
        return false;
    else if(r-2>=0 && c+1<board[0].size() && board[r-2][c+1]==true)
        return false;
    else if(r-1>=0 && c+2<board[0].size() && board[r-1][c+2]==true)
        return false;
    else
        return true;
}

void nknights(vector<vector<bool>>& board,string psf,int I,int J,int qsf){
    if(qsf==board.size()){
        cout<<psf<<endl;
        return;
    }
    for(int i=I;i<board.size();i++){
        for(int j=(i==I?J+1:0);j<board[0].size();j++){
            if(board[i][j]==false && isKnightSafe(board,i,j)){
                board[i][j]=true;
                nknights(board,psf+to_string(i)+to_string(j)+" ",i,j,qsf+1);
                board[i][j]=false;
            }
        }
    }
}
int counter=0;
void nknights2(vector<vector<bool>>& board,int i,int j,int ksf,string asf){
    if(i==board.size() && j==0){
        if(ksf==board.size()){
            ++counter;
            cout<<counter<<". "<<asf<<endl;
        }
        return;
    }
    else if(j==board.size()-1){
        nknights2(board,i+1,0,ksf,asf);
        if(isKnightSafe(board,i,j)){
            board[i][j]=true;
            nknights2( board,i+1,0,ksf+1,asf+to_string(i)+to_string(j)+" ");
            board[i][j]=false;
        }
    }
    else{
        nknights2(board,i,j+1,ksf,asf);
        if(isKnightSafe(board,i,j)){
            board[i][j]=true;
            nknights2(board,i,j+1,ksf+1,asf+to_string(i)+to_string(j)+" ");
            board[i][j]=false;
        }
    }
}
int main(int argc,char** argv){
    int n;
    cin>>n;
    vector<vector<bool>> board(n,vector<bool>(n,false));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++)
    //         cout<<board[i][j]<<" ";
    //     cout<<endl;
    // }
    nknights2(board,0,0,0,"");
}
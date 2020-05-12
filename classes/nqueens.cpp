#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isQueenSafe(vector<vector<bool>>& board,int r,int c){
    for(int j=c-1;j>=0;j--)
        if(board[r][j]==true)
            return false;
    for(int i=r-1;i>=0;i--)
        if(board[i][c]==true)
            return false;
    for(int i=r-1,j=c-1;i>=0 && j>=0;i--,j--)
        if(board[i][j]==true)
            return false;
    for(int i=r-1,j=c+1;i>=0 && j<board[0].size();i--,j++)
        if(board[i][j]==true)
            return false;
    return true;
}

void nqueens(vector<vector<bool>>& board,string psf,int I,int J,int qsf){
    if(qsf==board.size()){
        cout<<psf<<endl;
        return;
    }
    for(int i=I;i<board.size();i++){
        for(int j=(i==I?J+1:0);j<board[0].size();j++){
            if(board[i][j]==false && isQueenSafe(board,i,j)){
                board[i][j]=true;
                nqueens(board,psf+to_string(i)+to_string(j)+" ",i,j,qsf+1);
                board[i][j]=false;
            }
        }
    }
}
int counter=0;
void nqueens2(vector<vector<bool>>& board,int i,int j,int ksf,string asf){
    if(i==board.size() && j==0){
        if(ksf==board.size()){
            ++counter;
            cout<<counter<<". "<<asf<<endl;
        }
        return;
    }
    else if(j==board.size()-1){
        nqueens2(board,i+1,0,ksf,asf);
        if(isQueenSafe(board,i,j)){
            board[i][j]=true;
            nqueens2( board,i+1,0,ksf+1,asf+to_string(i)+to_string(j)+" ");
            board[i][j]=false;
        }
    }
    else{
        nqueens2(board,i,j+1,ksf,asf);
        if(isQueenSafe(board,i,j)){
            board[i][j]=true;
            nqueens2(board,i,j+1,ksf+1,asf+to_string(i)+to_string(j)+" ");
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
    nqueens2(board,0,0,0,"");
}
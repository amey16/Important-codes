#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<vector<int>> &board, int i, int j, int option) {
    for (int jj=0;jj<board.size();jj++)
        if(board[i][jj]==option)
            return false;
    for(int ii=0;ii<board[0].size();ii++)
        if(board[ii][j]==option)
            return false;
    for(int ii=0;ii<3;ii++) {
        for (int jj=0;jj<3;jj++) {
            int row=i/3*3+ii;
            int col=j/3*3+jj;
            if(board[row][col]==option)
                return false;
        }
    }
    return true;
}
int counter=0;
static void solve(vector<vector<int>> &board, int i, int j) {
    if(i==board.size() && j==0){
        counter++;
        cout<<"******"<<counter<<"******"<<endl;
        for(int r=0;r<board.size();r++){
            for(int c=0;c<board.size();c++){
                cout<<board[r][c]<<" ";
            }
            cout<<endl;
        }
        cout<<"******"<<counter<<"******"<<endl;
    }
    else if(j==board.size()-1){
        if(board[i][j]!=0){
            solve(board,i+1,0);
        }
        else{
            for(int option=1;option<=9;option++) {
                if (isValid(board,i,j,option)==true) {
                    board[i][j]=option;
                    solve(board,i+1,0);
                    board[i][j]=0;
                }
            }
        }
    }
    else{
        if(board[i][j]!=0)
            solve(board,i,j+1);
        else{
            for(int option=1;option<=9;option++){
                if(isValid(board,i,j,option)==true){
                    board[i][j]=option;
                    solve(board,i,j+1);
                    board[i][j]=0;
                }
            }
        }
    }
}
int main(int argc,char** argv){
    vector<vector<int>> board={ { 1, 0, 0, 3, 0, 0, 0, 0, 0 }, 
                                { 0, 6, 0, 0, 0, 7, 2, 0, 0 },
                                { 0, 0, 0, 9, 0, 0, 7, 0, 0 },
                                { 0, 0, 7, 0, 4, 0, 5, 0, 1 },
                                { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                                { 0, 1, 3, 0, 0, 0, 6, 0, 9 },
                                { 4, 0, 0, 0, 0, 0, 0, 6, 0 },
                                { 0, 0, 0, 0, 0, 0, 1, 8, 0 },
                                { 0, 0, 2, 6, 0, 5, 3, 0, 0 } };
    solve(board,0,0);
}
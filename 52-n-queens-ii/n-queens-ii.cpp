class Solution {
public:
    unordered_map<int , int> upperDiagonal;
    unordered_map<int,int> lowerDiagonal;
    unordered_map<int , int>col;
    unordered_map<int,int>row;
    bool isSafe(int i , int j){
        if(upperDiagonal[i - j] || lowerDiagonal[i+j] || col[j] || row[i]) return false;
        return true;
    }

    void solveBackTrack(vector<vector<char>>&board , int n , int i,int &count){
        if(i >= n){
            count++;
            return; //since for row limit , its here i >= n which working as a prevention for i to go beyong board.size();
        }

        for(int j = 0; j< n ; j++){ // and this loop ensures the column(i) doesnt go beyond n (j<n)
            if(isSafe( i , j)){
                board[i][j] = 'Q';
                upperDiagonal[i - j] = true;
                lowerDiagonal[i+j] = true;
                row[i] = true;
                col[j] = true;
                solveBackTrack(board, n , i + 1,count);
                board[i][j] = '.';
                 upperDiagonal[i - j] =false;
                lowerDiagonal[i+j] = false;
                row[i] = false;
                col[j] = false;
            }
        }
    }

    int totalNQueens(int n) {
        vector<vector<char>>board(n,vector<char>(n,'.'));
        int totalCount = 0;
        solveBackTrack(board,n,0,totalCount);
        return totalCount;
        
    }
};
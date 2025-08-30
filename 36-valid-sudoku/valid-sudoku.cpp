class Solution {
public:
    bool isValid(vector<vector<char>> & board , int row, int col){
       //row check
       char current = board[row][col];
       for(int i = 0 ; i < board.size() ; i++){
            if(i!=col &&board[row][i] == current)return false;
            if(i!=row &&board[i][col] == current)return false;
       }
       int newRow = (row/3) * 3;
       int newCol = (col/3) * 3;
       for(int i = newRow ; i< newRow +3 ; i++){
        for(int j = newCol ; j < newCol + 3 ; j++){
            if((i!=row || j != col) && board[i][j] == current) return false;
        }
       }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0 ; i< board.size() ; i++){
            for(int j = 0 ; j < board[0].size(); j++){
                if(board[i][j] != '.'){
                     if(!isValid(board,i,j)) return false;
                }
            }
        }
        return true;
    }
};
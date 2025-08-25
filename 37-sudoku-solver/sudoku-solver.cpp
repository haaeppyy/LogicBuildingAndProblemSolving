class Solution {
public:
    
    bool isSafe(vector<vector<char>>&board , int row, int col, char digit){
        int n = board.size();
        for(int k = 0 ; k < n ; k++ )
            if(board[row][k] == digit) return false;
        for(int k = 0 ; k < n ; k++)
            if(board[k][col] == digit) return false;

        int newRow  = (row/3)*3;
        int newCol = (col/3)*3;
        for(int i = newRow  ; i < newRow +3 ;i++){
            for( int j = newCol ; j < newCol + 3 ; j++){
                if( board[i][j] == digit) return false;
            }
        }
        return true;
        
    }
    bool solveFunction(vector<vector<char>>& board) {
        // baseCase

        // traversingWholeMatrix
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {

                if (board[i][j] == '.') {
                    for (char digit = '1'; digit <= '9'; digit++) { // tryOut all digits at every position
                        if (isSafe(board, i, j, digit)) {
                            // ifSafePlace
                            board[i][j] = digit;
                            // moveForwardToNextCell
                            bool isSolveAble = solveFunction(board);
                            if (isSolveAble)
                                return true; // ifThereIsNoComplecationFurther_thenItsTrue
                            else
                                board[i][j] =
                                    '.'; // backTrackTheCurrentChanges_and_tryOutDifferentDigit
                        }
                        //No_return_from_the_loop_means_no_place_to_place_digit
                    }
                        return false;
                }
            }
        }
        return true;
        //Since we iterated all the cell and there is No '.' left thus return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
       bool isSolved = solveFunction(board);
    
        
    }
};
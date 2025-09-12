class Solution {
public:
    unordered_map<int, bool> rowMap;
    unordered_map<int, bool> upperDaigonalMap;
    unordered_map<int, bool> lowerDaigonalMap;
    unordered_map<int, bool> colMap;
   void storeAns(vector<vector<char>>&board ,vector<vector<string>> &ans , int n){
        vector<string>tempVector;//for each ith vector which contains the rows of strings
       for(int i =0 ; i < n ; i++) {
           string tempOut(board[i].begin(),board[i].end());
           tempVector.push_back(tempOut);
       }
       ans.push_back(tempVector);
   }
    bool isSafe( int i , int j) {

        
        if (rowMap[i])
            return false;
        if (upperDaigonalMap[i - j])
            return false;
        if (colMap[j])
            return false;
        if (lowerDaigonalMap[i+ j])
            return false;
        return true;
    }
    void solveNQueen(vector<vector<char>> &board, vector<vector<string>>& ans,int i, int n) {
        if ( i >= n) {
            storeAns(board, ans, n);
            return;
        }
            

        for (int j = 0; j < n; j++) {
            if (isSafe( i , j)){
                board[i][j] = 'Q';
                rowMap[i] = true;
                upperDaigonalMap[i - j] = true;
                lowerDaigonalMap[j + i] = true;
                colMap[j] = true;
                solveNQueen(board, ans, i+1 ,n);
                board[i][j] = '.';
                rowMap[i] = false;
                upperDaigonalMap[i-j] = false;
                lowerDaigonalMap[ j +i ] = false;
                colMap[j] = false;
                
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> board(n,vector<char>(n,'.'));
        vector<vector<string>> ans;
        solveNQueen(board, ans, 0, n);
        return ans;
    }
};
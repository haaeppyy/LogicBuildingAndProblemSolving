class Solution {
public:
    bool dfs(vector<vector<char>> &board , int i , int j ,int st ,string word){
         if (st == word.size()) return true;
        if(i < 0 || i >= board.size()) return false;
        if(j < 0 || j >=board[0].size()) return false;
        if(board[i][j] != word[st]) return false;

        //change in board to avoid visit vector
        //save and mark the character inside board
        char tmpStoreChar = board[i][j];
        board[i][j] = '*';

        bool recAns = dfs(board ,i-1 , j , st+1, word) || dfs(board ,i+1 , j , st+1 ,word) || dfs(board ,i , j -1 , st+1 , word) || dfs(board ,i , j+1 , st+1 , word);
        //unMark
        board[i][j] = tmpStoreChar;
        return recAns;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int st = 0;
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j< board[0].size(); j++){
                if((board[i][j] == word[st]) && dfs(board, i , j , st,word)){
                    return true;
                }
            }
        }
        return false;
    }
};
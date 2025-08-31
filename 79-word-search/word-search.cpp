class Solution {
public:
    bool isSafe(vector<vector<char>> &board , vector<vector<bool>>&visit ,int i , int j){
        if(i< 0 || i >= board.size()) return false;
        if(j< 0 || j >= board[0].size()) return false;
        if(visit[i][j] ==  true) return false;

        return true;
    }
    bool solveBackTrack(vector<vector<char>> &board , vector<vector<bool>>&visit ,int i , int j , string word , int st){
        if(st >= word.size()) return true;

        int delrow[] = {-1,1,0,0};
        int delcol[] = {0,0,-1,1};
        for(int k = 0 ; k<4 ;k++){
            int newRow = delrow[k] + i;
            int newCol = delcol[k] + j;

            if((isSafe(board,visit,newRow,newCol)) &&board[newRow][newCol] == word[st]){
                visit[newRow][newCol] = true;
                bool ans = solveBackTrack(board,visit ,newRow,newCol,word ,st+1);
                if(ans) return true;
                visit[newRow][newCol] = false;

            }
        }
        
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> visit(board.size(),vector<bool>(board[0].size(),false));
        bool ans =false;
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0; j < board[0].size() ; j++){
                if(board[i][j] == word[0]){
                    visit[i][j] = true;
                    bool res =solveBackTrack(board,visit,i,j,word,1);
                    if(!res) visit[i][j] = false;
                    else{
                        ans = true;
                        break;
                    } 
                }
            }
        }


        return ans;
    }
}; 
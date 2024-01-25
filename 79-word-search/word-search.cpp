class Solution {
public:
    int m, n;

    bool dfs(int row, int col, int index, vector<vector<char>>& board, string word){
        if(index == word.length()) return true;

        if(row < 0 || col < 0 || row >= m || col >= n || board[row][col] != word[index])      
            return false;

        char temp = board[row][col];
        board[row][col] = '/';
        
        bool found = dfs(row + 1, col, index + 1, board, word) ||
                     dfs(row - 1, col, index + 1, board, word) ||
                     dfs(row, col + 1, index + 1, board, word) ||
                     dfs(row, col - 1, index + 1, board, word);

        board[row][col] = temp;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        m = board.size(), n = board[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(dfs(i, j, 0, board, word)) return true;
            }
        }

        return false;
    }
};
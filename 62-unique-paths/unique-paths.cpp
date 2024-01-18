class Solution {
public:
    int uniquePaths(int m, int n) {
        //use memoization method
        vector<vector<int>> grid(m, vector<int>(n, -1));
        return solve(m-1, n-1, grid);
    }

    int solve(int m, int n, vector<vector<int>>&grid){
        if(m == 0 && n == 0) return 1; //reach dest
        if(m < 0 || n < 0) return 0;   //out of bound
        if(grid[m][n] != -1) return grid[m][n];

        int left = solve(m-1, n, grid);
        int up = solve(m, n-1, grid); 
        grid[m][n] = left + up;
        return grid[m][n];
    }

};
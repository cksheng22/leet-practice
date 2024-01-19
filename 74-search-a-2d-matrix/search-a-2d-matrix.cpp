class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        if(matrix[0][0] > target) return false;
        int flag = 0;
        for(int i=0; i<m; i++){
            if(matrix[i][0] == target) return true;
            if(matrix[i][0] < target){
                flag = i;
            }
        }

        for(int i=0; i<n; i++){
            if(matrix[flag][i] == target) return true;
        }
        
        return false;
    }
};
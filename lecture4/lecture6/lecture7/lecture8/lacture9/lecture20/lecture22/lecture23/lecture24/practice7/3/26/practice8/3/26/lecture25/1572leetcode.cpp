class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;

        for(int i = 0; i < n; i++) {
            sum += mat[i][i];           // primary diagonal
            sum += mat[i][n-i-1];       // secondary diagonal

            if(i == n-i-1)              // middle element counted twice
                sum -= mat[i][i];
        }

        return sum;
    }
};
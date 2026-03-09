class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<int> result;
        
        for(int d = 0; d < m + n - 1; d++) {
            
            if(d % 2 == 0) { // upward direction
                int r = min(d, m - 1);
                int c = d - r;
                
                while(r >= 0 && c < n) {
                    result.push_back(mat[r][c]);
                    r--;
                    c++;
                }
            }
            else { // downward direction
                int c = min(d, n - 1);
                int r = d - c;
                
                while(c >= 0 && r < m) {
                    result.push_back(mat[r][c]);
                    r++;
                    c--;
                }
            }
        }
        
        return result;
    }
};
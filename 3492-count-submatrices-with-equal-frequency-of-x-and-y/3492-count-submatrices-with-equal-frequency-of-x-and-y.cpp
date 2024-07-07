class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        // Prefix sum arrays for 'X' and 'Y'
        vector<vector<int>> prefixX(row + 1, vector<int>(col + 1, 0));
        vector<vector<int>> prefixY(row + 1, vector<int>(col + 1, 0));

        // Compute prefix sums for 'X' and 'Y'
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                prefixX[i + 1][j + 1] = prefixX[i][j + 1] + prefixX[i + 1][j] - prefixX[i][j] + (grid[i][j] == 'X' ? 1 : 0);
                prefixY[i + 1][j + 1] = prefixY[i][j + 1] + prefixY[i + 1][j] - prefixY[i][j] + (grid[i][j] == 'Y' ? 1 : 0);
            }
        }
        int cnt = 0;
        
        // Iterate through all possible submatrices
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (i == 0 && j == 0) {
                    for (int k = i; k < row; k++) {
                        for (int l = j; l < col; l++) {
                            int totalX = prefixX[k + 1][l + 1] - prefixX[i][l + 1] - prefixX[k + 1][j] + prefixX[i][j];
                            int totalY = prefixY[k + 1][l + 1] - prefixY[i][l + 1] - prefixY[k + 1][j] + prefixY[i][j];
                            if (totalX == totalY && totalX > 0) {
                                cnt += 1;
                            }
                        }
                    }
                }
            }
        }
        return cnt;
    }
};
class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> rows(9, vector<bool>(9, false));
        vector<vector<bool>> colums(9, vector<bool>(9, false));
        vector<vector<bool>> subBoxes(9, vector<bool>(9, false));

        for (int row = 0; row < 9; ++row) {
            for (int col = 0; col < 9; ++col) {
                char currentCell = board[row][col];

                if (currentCell == '.') continue;

                int digitIndex = currentCell - '0' - 1;
                int subBoxIndex = (row / 3) * 3 + (col / 3);

                if (rows[row][digitIndex] || colums[col][digitIndex] ||
                    subBoxes[subBoxIndex][digitIndex])
                    return false;

                rows[row][digitIndex] = true;
                colums[col][digitIndex] = true;
                subBoxes[subBoxIndex][digitIndex] = true;
            }
        }
        return true;
    }
};

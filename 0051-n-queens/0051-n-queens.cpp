class Solution {
public:

    void solve(int Col,
               vector<int>& leftRow,
               vector<string>& board,
               vector<vector<string>>& ans,
               vector<int>& upperDiagonal,
               vector<int>& lowerDiagonal,
               int n) {

        // All columns are filled
        if (Col == n) {
            ans.push_back(board);
            return;
        }

        // Try every row for current column
        for (int row = 0; row < n; row++) {

            // Check if position is safe
            if (leftRow[row] == 0 &&
                upperDiagonal[row + Col] == 0 &&
                lowerDiagonal[n - 1 + Col - row] == 0) {

                // Place Queen
                board[row][Col] = 'Q';

                // Mark row and diagonals
                leftRow[row] = 1;
                upperDiagonal[row + Col] = 1;
                lowerDiagonal[n - 1 + Col - row] = 1;

                // Move to next column
                solve(Col + 1,
                      leftRow,
                      board,
                      ans,
                      upperDiagonal,
                      lowerDiagonal,
                      n);

                // Backtracking
                board[row][Col] = '.';

                leftRow[row] = 0;
                upperDiagonal[row + Col] = 0;
                lowerDiagonal[n - 1 + Col - row] = 0;
            }
        }
    }

public:

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;

        vector<string> board(n);

        string s(n, '.');

        for (int i = 0; i < n; i++) {
            board[i] = s;
        }

        // Track rows
        vector<int> leftRow(n, 0);

        // Track both diagonals
        vector<int> upperDiagonal(2 * n - 1, 0);
        vector<int> lowerDiagonal(2 * n - 1, 0);

        // Start from column 0
        solve(0,leftRow,board,ans,upperDiagonal,lowerDiagonal, n);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
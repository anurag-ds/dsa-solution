class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {

        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            vector<bool> seen(n + 1, false);
            for (int j = 0; j < n; j++) {
                int num = matrix[i][j];
                if (seen[num]) {
                    return false;
                }
                seen[num] = true;
            }
        }
        for (int j = 0; j < n; j++) {

            vector<bool> seen(n + 1, false);
            for (int i = 0; i < n; i++) {
                int num = matrix[i][j];
                if (seen[num]) {
                    return false;
                }
                seen[num] = true;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
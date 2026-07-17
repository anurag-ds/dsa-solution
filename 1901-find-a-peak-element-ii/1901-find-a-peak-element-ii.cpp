class Solution {
public:
    int maxelement(vector<vector<int>>& mat, int col) {
        int n = mat.size();
        int index = -1;
        int Max_element = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (mat[i][col] > Max_element) {
                Max_element = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int row = maxelement(mat, mid);
            int left = mid - 1 >= 0 ? mat[row][mid - 1] : INT_MIN;
            int right = mid + 1 < m ? mat[row][mid + 1] : INT_MIN;

            if (mat[row][mid] > left && mat[row][mid] > right) {
                return {row, mid};
            } else if (mat[row][mid] < left) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
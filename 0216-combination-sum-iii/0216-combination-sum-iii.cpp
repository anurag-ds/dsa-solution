class Solution {
public:
    void solve(int start, int k, int n,
               vector<int>& ds,
               vector<vector<int>>& ans) {

        // Exactly k numbers selected
        if(ds.size() == k) {
            if(n == 0) {
                ans.push_back(ds);
            }
            return;
        }

        for(int i = start; i <= 9; i++) {

            // Choose
            ds.push_back(i);

            // i + 1 because same number cannot be used again
            solve(i + 1, k, n - i, ds, ans);

            // Backtrack
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;

        solve(1, k, n, ds, ans);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
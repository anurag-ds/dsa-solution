class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int idx = 0; idx < 32; idx++) {
            int cnt = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] & (1 << idx)) {
                    cnt++;
                }
            }
            if (cnt % 3 == 1) {
                ans = ans | (1 << idx);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
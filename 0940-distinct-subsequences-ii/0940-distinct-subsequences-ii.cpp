class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;
        vector<long long> last(26, 0);   
        long long dp = 0;                 
        
        for (char ch : s) {
            int idx = ch - 'a';
            long long new_dp = (2 * dp + 1 - last[idx] + MOD) % MOD;
            last[idx] = (dp + 1) % MOD;
            dp = new_dp;
        }
        
        return (int) dp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
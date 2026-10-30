class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> perm;
        perm.reserve(n + 1); 

        int low = 0, high = n;

        for (char c : s) {
            if (c == 'I') perm.push_back(low++);
            else          perm.push_back(high--);
        }
        perm.push_back(low); 
        return perm;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
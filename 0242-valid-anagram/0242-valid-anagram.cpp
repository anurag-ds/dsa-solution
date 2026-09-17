class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }
        for (char c : t) {
            freq[c - 'a']--;
        }
        for (int x : freq) {
            if (x != 0)
                return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
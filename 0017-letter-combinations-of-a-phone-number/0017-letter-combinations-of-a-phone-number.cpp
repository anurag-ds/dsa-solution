class Solution {
public:

    void solve(string digits, int index, string &current,
               vector<string> &ans, vector<string> &mapping) {

        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }

        string letters = mapping[digits[index] - '0'];

        for (char ch : letters) {

            current.push_back(ch);

            solve(digits, index + 1, current, ans, mapping);

            current.pop_back();  
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;

        if (digits.empty())
            return ans;

        vector<string> mapping = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        string current = "";

        solve(digits, 0, current, ans, mapping);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
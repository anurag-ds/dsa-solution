
class Solution {
public:
    string removeOuterParentheses(string s) {

        int depth = 0;
        string ans;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(') {

                if (depth > 0) {
                    ans.push_back('(');
                }

                depth++;
            }
            else {

                depth--;

                if (depth > 0) {
                    ans.push_back(')');
                }
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
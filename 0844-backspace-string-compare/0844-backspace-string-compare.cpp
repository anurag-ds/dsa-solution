class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> ts;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(s[i]);
            }
        }
        for (int j = 0; j < t.size(); j++) {
            if (t[j] == '#') {
                if (!ts.empty()) {
                    ts.pop();
                }
            } else {
                ts.push(t[j]);
            }
        }
        return st == ts;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
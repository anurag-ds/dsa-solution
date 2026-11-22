
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        int n = num.size();

        for (int i = 0; i < n; i++) {
            while (!st.empty() && k > 0 &&
                   st.top() > num[i]) {
                st.pop();
                k--;
            }

            st.push(num[i]);
        }
        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        string res = "";

        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        int i = 0;
        while (i < res.size() && res[i] == '0') {
            i++;
        }
        res = res.substr(i);

        if (res.empty())
            return "0";

        return res;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;
        vector<int>ans(n);

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && prices[st.top()] > prices[i]) {
                st.pop();
            }
            ans[i] = prices[i];

            if (!st.empty()) {
                ans[i] = prices[i] - prices[st.top()];
            }

            st.push(i);
        }

        return ans;
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
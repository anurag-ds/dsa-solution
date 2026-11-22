
class Solution {
public:
    int getMaxArea(vector<int>& psum) {
        stack<int> st;
        int n = psum.size();
        int maxarea = 0;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && psum[st.top()] > psum[i]) {

                int ele = st.top();
                st.pop();

                int nse = i;
                int pse = st.empty() ? -1 : st.top();

                maxarea = max(maxarea,
                    psum[ele] * (nse - pse - 1));
            }

            st.push(i);
        }

        while (!st.empty()) {

            int ele = st.top();
            st.pop();

            int nse = n;
            int pse = st.empty() ? -1 : st.top();

            maxarea = max(maxarea,
                psum[ele] * (nse - pse - 1));
        }

        return maxarea;
    }
    int maximalRectangle(vector<vector<char>>& mat) {

        int n = mat.size();
        if (n == 0) return 0;

        int m = mat[0].size();

        vector<int> psum(m, 0);
        int res = 0;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                if (mat[i][j] == '1') {
                    psum[j]++;
                }
                else {
                    psum[j] = 0;
                }
            }

            res = max(res, getMaxArea(psum));
        }

        return res;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
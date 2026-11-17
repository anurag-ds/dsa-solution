
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();

        stack<int> st;
        vector<int> nse(n);
        vector<int> pse(n);

        long long total = 0;
        int mod = 1e9 + 7;

        // Next Smaller Element (NSE)
        for(int i = n-1; i >= 0; i--) {

            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            nse[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        // Clear stack
        while(!st.empty()) st.pop();

        // Previous Smaller Element (PSE)
        for(int i = 0; i < n; i++) {

            while(!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            pse[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        // Calculate contribution
        for(int i = 0; i < n; i++) {

            long long left = i - pse[i];
            long long right = nse[i] - i;

            total = (total + 
                    (left * right % mod) * arr[i]) % mod;
        }

        return total;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
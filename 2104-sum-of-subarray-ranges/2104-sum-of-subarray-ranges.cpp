
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        int n = nums.size();

        stack<int> st;

        long long summax = 0;
        long long summin = 0;

        vector<int> nse(n), pse(n);
        vector<int> nge(n), pge(n);

        // Next Greater Element
        for(int i = n-1; i >= 0; i--) {

            while(!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }

            nge[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        // Previous Greater Element
        for(int i = 0; i < n; i++) {

            while(!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }

            pge[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        // Next Smaller Element
        for(int i = n-1; i >= 0; i--) {

            while(!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }

            nse[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        // Previous Smaller Element
        for(int i = 0; i < n; i++) {

            while(!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }

            pse[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        // Contribution
        for(int i = 0; i < n; i++) {

            long long leftMax = i - pge[i];
            long long rightMax = nge[i] - i;

            long long leftMin = i - pse[i];
            long long rightMin = nse[i] - i;

            summax += leftMax * rightMax * nums[i];

            summin += leftMin * rightMin * nums[i];
        }

        return summax - summin;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
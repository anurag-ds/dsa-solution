class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
       stack<int>st;
       int maxarea =0;
       for(int i =0; i<n; i++){
        while(!st.empty() && heights[st.top()]>=heights[i]){
            int element = st.top();
            st.pop();
            int nse = i;
            int pse = st.empty() ?-1:st.top();
            maxarea = max(heights[element]*(nse-pse-1),maxarea);
        }
        st.push(i);
       }
       while(!st.empty()){
        int nse = n;
        int element = st.top();
        st.pop();
        int pse = st.empty()?-1:st.top();
        maxarea = max(heights[element]*(nse-pse-1),maxarea);
       }
       return maxarea;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
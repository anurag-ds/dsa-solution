class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n - 1;
        int maxi = 0;
        while (l < r) {
            int width = r - l;
            int h = min(height[l], height[r]);
            int area = width * h;
            maxi = max(maxi, area);
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
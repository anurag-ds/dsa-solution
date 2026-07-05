class Solution {
public:
    int SumbyD(vector<int>& nums, int div) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += ceil((double)nums[i] / div);
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (SumbyD(nums, mid) <= threshold) {
                ans = mid;        
                high = mid - 1;   
            } else {
                low = mid + 1;    
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
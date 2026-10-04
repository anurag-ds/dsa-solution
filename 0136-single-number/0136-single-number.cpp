class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int xorr = 0;
       int n = nums.size();
       for(int i =0; i<n; i++){
        xorr = xorr^nums[i];
       }
       return xorr; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
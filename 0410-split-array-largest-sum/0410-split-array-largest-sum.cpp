#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Count the number of subarrays needed if the maximum allowed sum is 'total'
    int Numberarray(vector<int>& nums, int total) {
        int subarray = 1;
        int element = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (element + nums[i] <= total) {
                element += nums[i];
            } else {
                subarray++;
                element = nums[i];
            }
        }

        return subarray;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int numberOfSplits = Numberarray(nums, mid);

            if (numberOfSplits > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return low;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
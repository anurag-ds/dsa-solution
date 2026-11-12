#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {

            int j = 0;

            while (j < nums2.size() && nums2[j] != nums1[i]) {
                j++;
            }

            int nextGreater = -1;

            for (int k = j + 1; k < nums2.size(); k++) {

                if (nums2[k] > nums1[i]) {
                    nextGreater = nums2[k];
                    break;
                }
            }

            ans.push_back(nextGreater);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
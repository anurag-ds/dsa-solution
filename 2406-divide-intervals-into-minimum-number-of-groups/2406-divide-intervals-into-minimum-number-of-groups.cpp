class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> left, right;

        for (auto& interval : intervals) {
            left.push_back(interval[0]);
            right.push_back(interval[1]);
        }

        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        int i = 0, j = 0;
        int cnt = 0;
        int maxcnt = 0;
        while (i < intervals.size()) {
            if (left[i] <= right[j]) {
                cnt++;
                i++;
            } else {
                cnt--;
                j++;
            }
            maxcnt = max(maxcnt, cnt);
        }
        return maxcnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
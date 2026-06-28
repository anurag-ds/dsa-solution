class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int pre = 0, suff = n - 1;

        if (target > nums[suff])
            return n;

        while (pre <= suff) {
            int mid = (pre + suff) / 2;

            if (nums[mid] == target)
                return mid;

            if (target > nums[mid]) {
                pre = mid + 1;
            } else {
                suff = mid - 1;
            }
        }

        return pre;
    }
};
class Solution {
public:
    int binarysearch(vector<int>& a, int tar, int l, int h) {
        if (l > h) return -1;

        int mid = (l + h) / 2;

        if (a[mid] == tar)
            return mid;
        else if (tar > a[mid])
            return binarysearch(a, tar, mid + 1, h);
        else
            return binarysearch(a, tar, l, mid - 1);
    }

    int search(vector<int>& nums, int tar) {
        int l = 0, h = nums.size() - 1;
        return binarysearch(nums, tar, l, h);
    }
};
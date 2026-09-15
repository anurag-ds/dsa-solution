class Solution {
    public:
    void findSubset(int ind,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds){
        ans.push_back(ds);
        for(int i =ind; i<nums.size(); i++){
            if(i != ind && nums[i] != nums[i]) continue;
            ds.push_back(nums[i]);
            findSubset(i+1,nums,ans,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(), nums.end());
        findSubset(0,nums,ans,ds);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
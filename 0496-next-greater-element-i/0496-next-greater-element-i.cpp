#include<iostream>
#include<stack>
#include<vector>
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>umap;
        stack<int>st;
        int n = nums2.size();
        for(int i =n-1; i>=0; i--){
            int ele = nums2[i];
            while(!st.empty() && st.top() <= ele){
                st.pop();
            }
            int res = (st.empty()) ? -1: st.top();
            umap.insert({ele,res});
            st.push(ele);
        }
        vector<int>ans;
        for(auto x :nums1){
            ans.push_back(umap[x]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
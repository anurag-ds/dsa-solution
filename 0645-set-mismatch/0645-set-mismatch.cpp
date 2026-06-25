class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       long long n = nums.size();
       // s-sN
       // S2-S2N
       long long SN = (n*(n+1))/2;
       long long S2N = (n*(n+1)*(2*n+1))/6;
       long long s = 0, s2 = 0;
       for(int i =0; i<n; i++){
        s += nums[i];
        s2 += (long long)nums[i] * (long long)nums[i];
       }
       long long val1 = s-SN;
       long long val2 = s2- S2N;
       val2 = val2/val1;
       long long x = (val1 + val2)/2;
       long long y = val2-x;
       return {(int)x,(int)y}; 
    }
};
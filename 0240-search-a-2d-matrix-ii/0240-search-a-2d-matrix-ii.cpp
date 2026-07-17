class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
       int n = mat.size(), m = mat[0].size();

       int r =0 , c = m-1;
       while(r<n && c>=0){
        if(target == mat[r][c]){
            return true;
        }else if(target<= mat[r][c]){
            c--;
        }else{
            r++;
        }
    }
       return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
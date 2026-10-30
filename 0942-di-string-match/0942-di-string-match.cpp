class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>prem;
        int low = 0;
        int high = s.size();
        for(int i =0; i<s.size(); i++){
            if(s[i] == 'I'){
                prem.push_back(low++);
            }
            else{
                prem.push_back(high--);
            }
            if(low == high){
                prem.push_back(low);
            }
        }
        return prem;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
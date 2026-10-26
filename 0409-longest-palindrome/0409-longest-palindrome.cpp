class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>freq;
        for(char c : s) freq[c]++;

        int result =0;
        bool hasOdd = false;

        for(auto & p :freq){
            int count = p.second;
            result += (count/2)*2;
            if(count %2 == 1) hasOdd = true;
        }
        if(hasOdd) result +=1;
        return result;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
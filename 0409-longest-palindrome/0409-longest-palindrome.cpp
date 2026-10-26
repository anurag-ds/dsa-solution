class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};
        for(char c : s) freq[c]++;

        int result =0;
        bool hasOdd = false;

        for(int i =0; i<128; i++){
            result += (freq[i]/2)*2;
            if(freq[i]%2 == 1) hasOdd = true;
        }
        return hasOdd ? result +1:result;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
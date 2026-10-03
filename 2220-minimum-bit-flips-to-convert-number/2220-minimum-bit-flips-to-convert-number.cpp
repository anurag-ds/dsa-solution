class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x = start^goal;
        int count = 0;

        while(x){
            count += x&1;
            x = x>>1;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
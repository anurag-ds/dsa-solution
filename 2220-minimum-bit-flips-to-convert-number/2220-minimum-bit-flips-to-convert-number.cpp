class Solution {
public:
    int minBitFlips(int start, int goal) {
      int ans = start^goal;
      int cnt = 0;
      for(int i =0; i<31; i++){
        if(ans&(1<<i)){
            cnt += 1;
        }
      }  
    return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
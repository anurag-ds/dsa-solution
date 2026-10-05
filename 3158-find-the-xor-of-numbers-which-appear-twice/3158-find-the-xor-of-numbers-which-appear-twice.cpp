class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
       unordered_set<int>seens;

       int ans = 0;
       for(int x : nums){
        if(seens.count(x)){ //Kya 1 seen ke andar hai?
            ans ^= x;
        }
        seens.insert(x); // So if false → else chalega: seen.insert(x);
       }
       return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
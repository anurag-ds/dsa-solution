class Solution {
public:
    int fib(int n) {
        if(n==0|| n==1){
            return n;
        }

        int last = fib(n-1);
        int slast = fib(n-2);
        return last + slast;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
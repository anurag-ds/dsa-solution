class Solution {
public:
    string largestOddNumber(string num) {

        for(int i = num.size() - 1; i >= 0; i--) {

            if((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }

        return "";
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while(columnNumber>0){
            columnNumber--;
            int remainder = columnNumber%26;
            char ch = remainder+'A';
            result.push_back(ch);
            columnNumber /= 26;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
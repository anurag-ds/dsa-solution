class Solution {
public:
    bool checkValidString(string s) {
        int min =0,max =0;
        for(int i =0; i<s.size(); i++){
            if(s[i] == '('){
                min++;
                max++;
            }
            else if(s[i] == ')'){
                min--;
                max--;
            }
            else{
                min--;
                max++;
            }
            if(min<0){
                min = 0;
            }
            if(max<0){
                return false;
            }
        }
        return(min == 0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
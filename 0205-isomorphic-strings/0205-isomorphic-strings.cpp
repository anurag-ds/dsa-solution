class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<int>sToT(256,-1);
        vector<int>tToT(256,-1);

        for(int i=0; i<s.size(); i++){
            char a = s[i];
            char b = t[i];
        if(sToT[a] != -1 && sToT[a] != b){
            return false;
        }
        if(tToT[b] != -1 && tToT[b] != a){
            return false;
        }
        sToT[a] = b;
        tToT[b] = a;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
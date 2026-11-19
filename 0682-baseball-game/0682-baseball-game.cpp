
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> x;

        for(int i = 0; i < operations.size(); i++) {

            if(operations[i] == "+") {
                int a = x.back();
                int b = x[x.size()-2];
                x.push_back(a + b);
            }

            else if(operations[i] == "D") {
                x.push_back(2 * x.back());
            }

            else if(operations[i] == "C") {
                x.pop_back();
            }

            else {
                x.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;
        for(int i = 0; i < x.size(); i++) {
            sum += x[i];
        }

        return sum;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
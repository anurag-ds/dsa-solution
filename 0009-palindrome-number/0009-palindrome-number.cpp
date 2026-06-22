class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;

        for(int i = 2; i * i < n; i++){
            if(isPrime[i]){
                for(int j = i * i; j < n; j += i){
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for(int i = 2; i < n; i++){
            if(isPrime[i]) count++;
        }

        return count;
    }

    bool isPalindrome(int n){
        if(n < 0) return false;

        int original = n;
        int revNum = 0;

        while(n > 0){
            int digit = n % 10;
            if(revNum> INT_MAX/10 || revNum< INT_MIN/10){
                return 0;
            }
            revNum = revNum * 10 + digit;
            n /= 10;
        }

        return original == revNum;
    }
};
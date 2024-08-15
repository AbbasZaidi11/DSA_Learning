class Solution {
public:
      long long mod = 1e9+7;
    
    long long Calcpow(long long num, long long power) {
        if (power == 0) return 1;
        if (power == 1) return num % mod;
        if (num == 0 || num == 1) return num;
        
        long long half = Calcpow(num, power / 2) % mod;
        long long result = (half * half) % mod;
        
        if (power % 2 != 0) {
            result = (result * num) % mod;
        }
        
        return result;
    }
    
    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2; // Number of even positions
        long long odd = n / 2; // Number of odd positions
        
        return (int)((Calcpow(5, even) * Calcpow(4, odd)) % mod);
    }

};

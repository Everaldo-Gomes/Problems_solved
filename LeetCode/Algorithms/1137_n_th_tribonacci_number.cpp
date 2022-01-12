class Solution {
public:
    int tribonacci(int n) {
        
        long long int t0 = 0, t1 = 1, t2 = 1, sum = 0;
        
        if (n == 0) return t0;
        if (n == 1 || n == 2) return t1; // or t2
        if (n == 3) return t1 + t2;
  
        for(int i = 2; i < n; i++) {
            
            sum = t0 + t1 + t2;
            t0 = t1;
            t1 = t2;
            t2 = sum;
        }
        
        return t2;
    }
};

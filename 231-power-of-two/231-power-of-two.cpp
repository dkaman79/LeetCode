class Solution {
public:
    bool isPowerOfTwo(long n) {
        return n > 0 && not (n & n-1);
    }
};
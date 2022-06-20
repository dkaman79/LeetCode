class Solution {
public:
    int mySqrt(int x) {
        long long low = 1, high = x, ans = 0;
        while(low <= high) {
            long mid =(low+high)/2;
            long  midSqr = mid*mid;
            if(midSqr == x){
                return mid;
            }
            else if(midSqr > x) {
                high = mid-1;
            }
            else {
                low = mid+1;
                ans = mid;
            }
                
        }
        return ans;
    }
};
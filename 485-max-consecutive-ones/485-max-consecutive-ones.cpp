class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0, n = nums.size(), curr = 0;;
        for(int i=0; i<n; i++){
            if(nums[i] == 0)
                curr = 0;
            else {
                curr++;
                res = max(res, curr);
            }
            
        }
        return res;
    }
};